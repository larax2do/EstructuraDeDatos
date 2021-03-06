#ifndef DATABASE_H
#define DATABASE_H

//file por defecto
//index => index.h
//relaciones => relaciones.h
#include<iostream>
#include<fstream>
#include<unordered_map>
using namespace std;
#include"index.h"
#include"cuenta.h"
#include"functionHash.h"
#include"hash.h"

class Database{
private:
    std::unordered_map<std::string,int> hashIndices;
    HashDS hashArray;
public:
    Database(){
        // std::cout << "BEGIN CONSTRUCTOR" << std::endl;
        // hashearIndicesv2();
        // std::cout << "END CONSTRUCTOR" << std::endl;
    }
    ~Database(){}
    void insert(Cuenta & cn){
        /*******************************************************************************************
        **                                FILTRO
        ** no inserta registros repetidos
        *******************************************************************************************/
        hashearIndicesv2();
        int DD;
        if(  hashArray.findd(cn.getNumCuenta(),DD))return;
        //insertando la relacion cuenta completa a relacionCuenta.txt
        //![0]
        fstream entradaRelCuen;
        entradaRelCuen.open("relacionCuenta.dat",std::ios::out | std::ios::app | std::ios::binary);
        entradaRelCuen.write((char*)&cn, sizeof(cn)); //llena la tabla relacionCuenta
        entradaRelCuen.seekp(0, ios::end); // pone el cursor al final del archivo.
        int l = entradaRelCuen.tellp() / sizeof(cn); // la posicion actual
        entradaRelCuen.close();
        //![0]

        //insertando el index en el file Index
        //![1]
        Index i;
        i.setIndex(cn.getNumCuenta());
        i.setPos(l);
        fstream entradaIndex;
        entradaIndex.open("index.dat", std::ios::out | ios::app | ios::binary);
        entradaIndex.write( (char*)&i, sizeof(i) );//llena tabla index
        entradaIndex.close();
        //![1]

    }
    void printIndex(){
        fstream salidaIndex;
        salidaIndex.open("index.dat",std::ios::in|ios::binary);
        Index e;
        while( salidaIndex.read( (char*) &e, sizeof(e)) )  {
            // std::cout << "hola2" << std::endl;
            //std::cout << e.getIndex() << e.getPosition() << std::endl;
           e.datosConstantes();
          //(std:cout << e.getIndex() << std::endl;
           // std::cout << "hola3" << std::endl;
        }
        salidaIndex.close();
    }
    void printRelacionCuenta(){
        fstream salidaRelC;
        salidaRelC.open("relacionCuenta.dat",std::ios::in | std::ios::binary);
        Cuenta c;
        while( salidaRelC.read( (char*)&c ,sizeof(c)) ){
            c.printCuenta();
        }
        salidaRelC.close();
    }


    //![v1]
    //HASHEAR INDICES V1 , ESTE TRABAJA CON EL UNORDERED_MAP
    void hashearIndices(){
        fstream salidaIndice;
        salidaIndice.open("index.dat",std::ios::in | std::ios::binary);
        Index e;
        while( salidaIndice.read( (char*)&e,sizeof(e)  ) ){
            //e.datosConstantes();
            hashIndices.insert(std::make_pair(e.getIndex(),e.getPosition()));
        }
        salidaIndice.close();
    }
    //![v1]

    //![v2]
    //HASHEAR INDICES V2, ESTE TRABAJA CON EL HASH PROPIO QUE TENEMOS
    void hashearIndicesv2(){
        std::cout << "FUNCION HASHEARINDICESV2" << std::endl;
        fstream salidaIndice;
        salidaIndice.open("index.dat",std::ios::in | std::ios::binary);
        Index e;
        while( salidaIndice.read( (char*)&e,sizeof(e)  ) ){
            //e.datosConstantes();
            // if(!e.isDeleted()){
            hashArray.insertInHash(e);
            //     //std::cout << e.getIndex() << " false deleted" << std::endl;
            // }
        }
        salidaIndice.close();

    }
    //![v2]

    //print el hash de unordered_map
    //![v1]
    void printHashIndices(){
        unsigned n = hashIndices.bucket_count();
        std::cout << "my hashIndices has " << n << " buckets.\n";

        for (unsigned i=0; i<n; ++i) {
            std::cout << "bucket #" << i << " contains: ";
            for (auto it = hashIndices.begin(i); it!=hashIndices.end(i); ++it)
                std::cout << "[" << it->first << ":" << it->second << "] ";
            std::cout << "\n";
        }
    }
    //![v1]

    //print propio hash hashArray
    //![v2]
    void printHashArrayV2(){
        std::cout << "FUNCION PRINTHASHARRAYV2" << std::endl;
        hashArray.printHashDS();
    }
    //![v2]


    //find de unordered_map
    //![v1]
    void SelectFromTTWhere(const char * numCuenta){
        auto it = hashIndices.find(numCuenta);
        if(it != hashIndices.end()){ //found
            //std::cout << "esta en la posicion" << (*it).second  << std::endl;
            std::cout << "Dato solicitado" << std::endl;
            int a = (*it).second - 1;
            fstream salida_pri;
            Cuenta Ctst, Ctst2;
            salida_pri.open("relacionCuenta.dat",ios::in | ios::binary);
			salida_pri.seekg(sizeof(Ctst) * a, ios::beg ); // te lleva a ese registro
			salida_pri.read( (char*) &Ctst2 , sizeof(Ctst2));
            Ctst2.printCuenta();
            salida_pri.close();
        }else{//not found
            std::cout << "registro no encontrado" << std::endl;
        }

    }
    //![v1]

    //find de nuestro propio HASH_H
    //![v2]
    void SelectFromTTWhereV2(const char * numCuenta){
        //std::cout << "FUNCION SELECT-FROM-TTWHEREV2" << std::endl;
        int DD;
        if(  hashArray.findd(numCuenta,DD) ){ //si lo encontro
            DD--;
            fstream salida_pri;
            Cuenta Ctst, Ctst2;
            salida_pri.open("relacionCuenta.dat",ios::in | ios::binary);
			salida_pri.seekg(sizeof(Ctst) * DD, ios::beg ); // te lleva a ese registro
			salida_pri.read( (char*) &Ctst2 , sizeof(Ctst2));
            Ctst2.printCuenta();
            salida_pri.close();
        }else{//no lo encontro
            std::cout << "registro no encontrado." << std::endl;
        }
    }
    //![v2]




    void eliminar(const char * numCuenta){
        int DD;
        if(  hashArray.findd(numCuenta,DD) ){ //si lo encontro
            Index i;
            i.setIndex(numCuenta);
            i.setDeleted(true);
            i.setPos(DD);
            DD--;
            fstream entrada_pri;
            Cuenta Ctst, Ctst2;
            entrada_pri.open("index.dat",ios::out | ios::binary);
			entrada_pri.seekg(sizeof(Ctst) * DD, ios::beg ); // te lleva a ese registro
			//entrada_pri.read( (char*) &Ctst2 , sizeof(Ctst2));
            entrada_pri.write((char*)&i, sizeof(i));
            //Ctst2.printCuenta();
            entrada_pri.close();
            std::cout << "end to eliminar " << std::endl;
        }else{//no lo encontro
            std::cout << "registro no encontrado." << std::endl;
        }
    }
    void change(const char *numCuenta){
        fstream salidaIndex;
        salidaIndex.open("index.dat",std::ios::in| ios::out |ios::binary);
        Index e;
        while( salidaIndex.read( (char*) &e, sizeof(e)) )  {
            // std::cout << "hola2" << std::endl;
            //std::cout << e.getIndex() << e.getPosition() << std::endl;
            // std::cout << e.getIndex() << " y " << !(strcmp(e.getIndex(),numCuenta)) << std::endl;
            if( !(strcmp(e.getIndex(),numCuenta))){
                //std:cout << "found" << std::endl;
                //e.datosConstantes();
                if(!e.isDeleted()){
                    e.setDeleted(true);
                    auto pos = -1 * sizeof(e);
                    salidaIndex.seekp(pos,std::ios::cur);
                    salidaIndex.write((char*)&e, sizeof(e));
                }

            }
          //(std:cout << e.getIndex() << std::endl;
           // std::cout << "hola3" << std::endl;
        }
        salidaIndex.close();
    }

};



#endif // DATABASE_H
