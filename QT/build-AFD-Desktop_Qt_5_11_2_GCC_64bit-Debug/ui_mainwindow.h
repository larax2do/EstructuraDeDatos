/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Exit;
    QAction *actionDot;
    QAction *actionIniciar;
    QAction *action_Clear;
    QWidget *centralWidget;
    QTableView *tableViewTransiciones;
    QPushButton *btnLlenartransiciones;
    QLabel *labelTitleTransiciones;
    QFrame *lineHorizontal1;
    QLabel *labelINPUT;
    QLabel *labelMAQUINA;
    QLabel *labelEstado;
    QLabel *labelAlfabeto;
    QLabel *labelEstadoInicial;
    QWidget *layoutWidget;
    QHBoxLayout *Estado;
    QLineEdit *txtEstado;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAddEstado;
    QWidget *layoutWidget1;
    QHBoxLayout *Alfabeto;
    QLineEdit *txtAlfabeto;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAddAlfabeto;
    QLabel *labelEstadoAceptacion;
    QWidget *layoutWidget2;
    QHBoxLayout *EstadoInicial;
    QLineEdit *txtEstadoInicial;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnAddEstadoInicial;
    QWidget *layoutWidget3;
    QHBoxLayout *EstadoAceptacion;
    QLineEdit *txtEstadoAceptacion;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnAddEstadoAceptacion;
    QLineEdit *txtEstados;
    QLabel *labelEstados;
    QLabel *labelAlfabetos;
    QLabel *labelEstadoInicial2;
    QLabel *labelEstadosAceptaciones;
    QLabel *labelCadena;
    QLineEdit *txtAlfabetos;
    QLineEdit *txtEstadoInicial2;
    QLineEdit *txtEstadosAceptaciones;
    QFrame *lineHorizantal2;
    QFrame *lineHorizantal3;
    QLineEdit *txtCadena;
    QPushButton *btnVerificar;
    QPushButton *btnFormarTransiciones;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *ok1;
    QPushButton *ok2;
    QPushButton *ok3;
    QPushButton *ok4;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(816, 440);
        QFont font;
        font.setFamily(QStringLiteral("TeX Gyre Adventor"));
        MainWindow->setFont(font);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/close.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon);
        actionDot = new QAction(MainWindow);
        actionDot->setObjectName(QStringLiteral("actionDot"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/dot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDot->setIcon(icon1);
        actionIniciar = new QAction(MainWindow);
        actionIniciar->setObjectName(QStringLiteral("actionIniciar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/Im\303\241genes/images_qt_menu_toolbar/iniciar.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIniciar->setIcon(icon2);
        action_Clear = new QAction(MainWindow);
        action_Clear->setObjectName(QStringLiteral("action_Clear"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/Im\303\241genes/images_qt_menu_toolbar/clear.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Clear->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableViewTransiciones = new QTableView(centralWidget);
        tableViewTransiciones->setObjectName(QStringLiteral("tableViewTransiciones"));
        tableViewTransiciones->setGeometry(QRect(540, 30, 221, 201));
        btnLlenartransiciones = new QPushButton(centralWidget);
        btnLlenartransiciones->setObjectName(QStringLiteral("btnLlenartransiciones"));
        btnLlenartransiciones->setGeometry(QRect(540, 240, 111, 23));
        labelTitleTransiciones = new QLabel(centralWidget);
        labelTitleTransiciones->setObjectName(QStringLiteral("labelTitleTransiciones"));
        labelTitleTransiciones->setGeometry(QRect(590, 10, 141, 16));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        labelTitleTransiciones->setFont(font1);
        labelTitleTransiciones->setCursor(QCursor(Qt::CrossCursor));
        lineHorizontal1 = new QFrame(centralWidget);
        lineHorizontal1->setObjectName(QStringLiteral("lineHorizontal1"));
        lineHorizontal1->setGeometry(QRect(10, 180, 471, 20));
        lineHorizontal1->setFrameShape(QFrame::HLine);
        lineHorizontal1->setFrameShadow(QFrame::Sunken);
        labelINPUT = new QLabel(centralWidget);
        labelINPUT->setObjectName(QStringLiteral("labelINPUT"));
        labelINPUT->setGeometry(QRect(170, 20, 59, 15));
        labelINPUT->setFont(font1);
        labelINPUT->setCursor(QCursor(Qt::CrossCursor));
        labelMAQUINA = new QLabel(centralWidget);
        labelMAQUINA->setObjectName(QStringLiteral("labelMAQUINA"));
        labelMAQUINA->setGeometry(QRect(170, 210, 59, 15));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        labelMAQUINA->setFont(font2);
        labelMAQUINA->setCursor(QCursor(Qt::CrossCursor));
        labelMAQUINA->setTabletTracking(false);
        labelMAQUINA->setScaledContents(false);
        labelEstado = new QLabel(centralWidget);
        labelEstado->setObjectName(QStringLiteral("labelEstado"));
        labelEstado->setGeometry(QRect(50, 50, 51, 16));
        labelAlfabeto = new QLabel(centralWidget);
        labelAlfabeto->setObjectName(QStringLiteral("labelAlfabeto"));
        labelAlfabeto->setGeometry(QRect(50, 80, 61, 16));
        labelEstadoInicial = new QLabel(centralWidget);
        labelEstadoInicial->setObjectName(QStringLiteral("labelEstadoInicial"));
        labelEstadoInicial->setGeometry(QRect(50, 110, 51, 16));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 50, 171, 25));
        Estado = new QHBoxLayout(layoutWidget);
        Estado->setSpacing(6);
        Estado->setContentsMargins(11, 11, 11, 11);
        Estado->setObjectName(QStringLiteral("Estado"));
        Estado->setContentsMargins(0, 0, 0, 0);
        txtEstado = new QLineEdit(layoutWidget);
        txtEstado->setObjectName(QStringLiteral("txtEstado"));

        Estado->addWidget(txtEstado);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Estado->addItem(horizontalSpacer);

        btnAddEstado = new QPushButton(layoutWidget);
        btnAddEstado->setObjectName(QStringLiteral("btnAddEstado"));

        Estado->addWidget(btnAddEstado);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 80, 171, 25));
        Alfabeto = new QHBoxLayout(layoutWidget1);
        Alfabeto->setSpacing(6);
        Alfabeto->setContentsMargins(11, 11, 11, 11);
        Alfabeto->setObjectName(QStringLiteral("Alfabeto"));
        Alfabeto->setContentsMargins(0, 0, 0, 0);
        txtAlfabeto = new QLineEdit(layoutWidget1);
        txtAlfabeto->setObjectName(QStringLiteral("txtAlfabeto"));

        Alfabeto->addWidget(txtAlfabeto);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Alfabeto->addItem(horizontalSpacer_2);

        btnAddAlfabeto = new QPushButton(layoutWidget1);
        btnAddAlfabeto->setObjectName(QStringLiteral("btnAddAlfabeto"));

        Alfabeto->addWidget(btnAddAlfabeto);

        labelEstadoAceptacion = new QLabel(centralWidget);
        labelEstadoAceptacion->setObjectName(QStringLiteral("labelEstadoAceptacion"));
        labelEstadoAceptacion->setGeometry(QRect(50, 140, 141, 20));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 110, 171, 25));
        EstadoInicial = new QHBoxLayout(layoutWidget2);
        EstadoInicial->setSpacing(6);
        EstadoInicial->setContentsMargins(11, 11, 11, 11);
        EstadoInicial->setObjectName(QStringLiteral("EstadoInicial"));
        EstadoInicial->setContentsMargins(0, 0, 0, 0);
        txtEstadoInicial = new QLineEdit(layoutWidget2);
        txtEstadoInicial->setObjectName(QStringLiteral("txtEstadoInicial"));

        EstadoInicial->addWidget(txtEstadoInicial);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        EstadoInicial->addItem(horizontalSpacer_3);

        btnAddEstadoInicial = new QPushButton(layoutWidget2);
        btnAddEstadoInicial->setObjectName(QStringLiteral("btnAddEstadoInicial"));

        EstadoInicial->addWidget(btnAddEstadoInicial);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(120, 140, 171, 25));
        EstadoAceptacion = new QHBoxLayout(layoutWidget3);
        EstadoAceptacion->setSpacing(6);
        EstadoAceptacion->setContentsMargins(11, 11, 11, 11);
        EstadoAceptacion->setObjectName(QStringLiteral("EstadoAceptacion"));
        EstadoAceptacion->setContentsMargins(0, 0, 0, 0);
        txtEstadoAceptacion = new QLineEdit(layoutWidget3);
        txtEstadoAceptacion->setObjectName(QStringLiteral("txtEstadoAceptacion"));
        txtEstadoAceptacion->setEnabled(true);

        EstadoAceptacion->addWidget(txtEstadoAceptacion);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        EstadoAceptacion->addItem(horizontalSpacer_4);

        btnAddEstadoAceptacion = new QPushButton(layoutWidget3);
        btnAddEstadoAceptacion->setObjectName(QStringLiteral("btnAddEstadoAceptacion"));

        EstadoAceptacion->addWidget(btnAddEstadoAceptacion);

        txtEstados = new QLineEdit(centralWidget);
        txtEstados->setObjectName(QStringLiteral("txtEstados"));
        txtEstados->setGeometry(QRect(120, 240, 351, 23));
        txtEstados->setReadOnly(true);
        labelEstados = new QLabel(centralWidget);
        labelEstados->setObjectName(QStringLiteral("labelEstados"));
        labelEstados->setGeometry(QRect(50, 240, 59, 15));
        labelAlfabetos = new QLabel(centralWidget);
        labelAlfabetos->setObjectName(QStringLiteral("labelAlfabetos"));
        labelAlfabetos->setGeometry(QRect(50, 270, 59, 15));
        labelEstadoInicial2 = new QLabel(centralWidget);
        labelEstadoInicial2->setObjectName(QStringLiteral("labelEstadoInicial2"));
        labelEstadoInicial2->setGeometry(QRect(50, 300, 59, 15));
        labelEstadosAceptaciones = new QLabel(centralWidget);
        labelEstadosAceptaciones->setObjectName(QStringLiteral("labelEstadosAceptaciones"));
        labelEstadosAceptaciones->setGeometry(QRect(50, 330, 59, 15));
        labelCadena = new QLabel(centralWidget);
        labelCadena->setObjectName(QStringLiteral("labelCadena"));
        labelCadena->setGeometry(QRect(630, 280, 59, 15));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        labelCadena->setFont(font3);
        labelCadena->setMouseTracking(true);
        txtAlfabetos = new QLineEdit(centralWidget);
        txtAlfabetos->setObjectName(QStringLiteral("txtAlfabetos"));
        txtAlfabetos->setGeometry(QRect(120, 270, 351, 23));
        txtAlfabetos->setReadOnly(true);
        txtEstadoInicial2 = new QLineEdit(centralWidget);
        txtEstadoInicial2->setObjectName(QStringLiteral("txtEstadoInicial2"));
        txtEstadoInicial2->setGeometry(QRect(120, 300, 351, 23));
        txtEstadoInicial2->setReadOnly(true);
        txtEstadosAceptaciones = new QLineEdit(centralWidget);
        txtEstadosAceptaciones->setObjectName(QStringLiteral("txtEstadosAceptaciones"));
        txtEstadosAceptaciones->setGeometry(QRect(120, 330, 351, 23));
        txtEstadosAceptaciones->setReadOnly(true);
        lineHorizantal2 = new QFrame(centralWidget);
        lineHorizantal2->setObjectName(QStringLiteral("lineHorizantal2"));
        lineHorizantal2->setGeometry(QRect(10, 370, 471, 16));
        lineHorizantal2->setFrameShape(QFrame::HLine);
        lineHorizantal2->setFrameShadow(QFrame::Sunken);
        lineHorizantal3 = new QFrame(centralWidget);
        lineHorizantal3->setObjectName(QStringLiteral("lineHorizantal3"));
        lineHorizantal3->setGeometry(QRect(510, 260, 291, 20));
        lineHorizantal3->setFrameShape(QFrame::HLine);
        lineHorizantal3->setFrameShadow(QFrame::Sunken);
        txtCadena = new QLineEdit(centralWidget);
        txtCadena->setObjectName(QStringLiteral("txtCadena"));
        txtCadena->setGeometry(QRect(540, 300, 221, 23));
        btnVerificar = new QPushButton(centralWidget);
        btnVerificar->setObjectName(QStringLiteral("btnVerificar"));
        btnVerificar->setGeometry(QRect(680, 330, 80, 23));
        btnFormarTransiciones = new QPushButton(centralWidget);
        btnFormarTransiciones->setObjectName(QStringLiteral("btnFormarTransiciones"));
        btnFormarTransiciones->setGeometry(QRect(660, 240, 80, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(300, 50, 82, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ok1 = new QPushButton(widget);
        ok1->setObjectName(QStringLiteral("ok1"));

        verticalLayout->addWidget(ok1);

        ok2 = new QPushButton(widget);
        ok2->setObjectName(QStringLiteral("ok2"));

        verticalLayout->addWidget(ok2);

        ok3 = new QPushButton(widget);
        ok3->setObjectName(QStringLiteral("ok3"));

        verticalLayout->addWidget(ok3);

        ok4 = new QPushButton(widget);
        ok4->setObjectName(QStringLiteral("ok4"));

        verticalLayout->addWidget(ok4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 816, 17));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(actionDot);
        menu_File->addAction(actionIniciar);
        menu_File->addAction(action_Clear);
        menu_File->addAction(action_Exit);
        mainToolBar->addAction(actionDot);
        mainToolBar->addAction(actionIniciar);
        mainToolBar->addAction(action_Clear);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Automata Finito Determinado", nullptr));
        action_Exit->setText(QApplication::translate("MainWindow", "&Exit", nullptr));
        actionDot->setText(QApplication::translate("MainWindow", "&Dot", nullptr));
        actionIniciar->setText(QApplication::translate("MainWindow", "&Iniciar", nullptr));
        action_Clear->setText(QApplication::translate("MainWindow", "&Clear", nullptr));
        btnLlenartransiciones->setText(QApplication::translate("MainWindow", "Llenar Trans", nullptr));
        labelTitleTransiciones->setText(QApplication::translate("MainWindow", "TABLA DE TRANSICIONES", nullptr));
        labelINPUT->setText(QApplication::translate("MainWindow", "INPUT", nullptr));
        labelMAQUINA->setText(QApplication::translate("MainWindow", "MAQUINA", nullptr));
        labelEstado->setText(QApplication::translate("MainWindow", "Estado", nullptr));
        labelAlfabeto->setText(QApplication::translate("MainWindow", "Alfabeto", nullptr));
        labelEstadoInicial->setText(QApplication::translate("MainWindow", "Estado I", nullptr));
        btnAddEstado->setText(QApplication::translate("MainWindow", "Add", nullptr));
        btnAddAlfabeto->setText(QApplication::translate("MainWindow", "Add", nullptr));
        labelEstadoAceptacion->setText(QApplication::translate("MainWindow", "Estado A", nullptr));
        btnAddEstadoInicial->setText(QApplication::translate("MainWindow", "Add", nullptr));
        btnAddEstadoAceptacion->setText(QApplication::translate("MainWindow", "Add", nullptr));
        labelEstados->setText(QApplication::translate("MainWindow", "Estados", nullptr));
        labelAlfabetos->setText(QApplication::translate("MainWindow", "Alfabeto", nullptr));
        labelEstadoInicial2->setText(QApplication::translate("MainWindow", "Estado I", nullptr));
        labelEstadosAceptaciones->setText(QApplication::translate("MainWindow", "Estado A", nullptr));
        labelCadena->setText(QApplication::translate("MainWindow", "Cadena", nullptr));
        btnVerificar->setText(QApplication::translate("MainWindow", "Verificar", nullptr));
        btnFormarTransiciones->setText(QApplication::translate("MainWindow", "Formar Trans", nullptr));
        ok1->setText(QApplication::translate("MainWindow", "Ok", nullptr));
        ok2->setText(QApplication::translate("MainWindow", "Ok", nullptr));
        ok3->setText(QApplication::translate("MainWindow", "Ok", nullptr));
        ok4->setText(QApplication::translate("MainWindow", "OK", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
