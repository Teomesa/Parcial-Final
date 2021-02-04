#include "simulacion.h"
#include "ui_simulacion.h"

Simulacion::Simulacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Simulacion)
{
    ui->setupUi(this);
}

Simulacion::~Simulacion()
{
    delete ui;
}
