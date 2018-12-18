#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include"NFA.h"
#include"DFA.h"
#include "state.h"

/*
    LA FUNCION CONCATENAR . CONCATENA NFA1 CON NFA2  Y LOS PONE EN NFA3 CON LOS SGTES CRITERIOS:
    -> DE LOS ESTADOS DE ACEPTACION DE NFA1 SALEN CON LA TRANSICION "E" HACIA EL ESTADO INICIAL DE NFA2
    ->EL ESTADO INICIAL DE NFA2 DEJA DE SERLO.
    -> TODOS LOS ESTADOS DE ACEPTACION DE NFA1 DEJAN DE SERLO

*/

void concatenate( NFA<std::string,std::string> &nfa1,  NFA<std::string,std::string> &nfa2 , NFA<std::string,std::string> &nfa3 );




/*
    LA FUNCION UNION UNE NFA1 Y NFA2 EN NFA3  CON LOS SGTES CRITERIOS:
    ->CREA UN NUEVO ESTADO INICIAL
    -> DE ESE NUEVO ESTADO INICIAL SALEN TRANSICIONES "E"  HACIA LOS ESTADOS INICIALES NFA1 Y NFA2
    ->EL ESTADO INICIAL DE NFA1 Y NFA2 DEJAN DE SERLO
*/

void Union(NFA<std::string,std::string> &nfa1,  NFA<std::string,std::string> &nfa2 , NFA<std::string,std::string> &nfa3);



/*
    LA FUNCION  ESTRELLA , HACE A NFA1 ESTRELLA a* EN NFA2 , CON LOS SGTES CRITERIOS:
    -> DE LOS ESTADOS DE ACEPTACION SALEN TRANSICIONES E HACIA EL ESTADO INICIAL DE NFA1
    ->SE CREA UN NUEVO ESTADO INICIAL Y A LA VEZ ESTADO FINAL
    -> DE ESE NUEVO ESTADO CREADO SALE UNA TRANSICION E HACIA EL ANTIGUO ESTADO INICIAL DE NFA1

*/
void estrella(NFA<std::string,std::string> &nfa1,  NFA<std::string,std::string> &nfa2);



#endif // FUNCTIONS_H