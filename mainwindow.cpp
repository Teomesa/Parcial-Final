#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena = new QGraphicsScene(this);
    escena->setSceneRect(0,-330,380,330);
    escena->addRect(escena->sceneRect());
    ui->graphicsView->setScene(escena);
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(mover()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pntSimular_clicked()
{
    double x=ui->LE_posx->text().toDouble();
    double y=ui->LE_posy->text().toDouble();
    double v=ui->LE_Vel->text().toDouble();
    double a= ui->LE_angulo->text().toDouble();
    a=(a*3.14159)/180;
    //cuerpo= new Particula(x,y,v,a);
    Cuerpos.push_back(new Fisicas(x,y,v,a));
    escena->addItem(Cuerpos.back());
    timer->start(5);
}

void MainWindow::mover()
{
   QList<Fisicas*>::iterator it;
   for(it=Cuerpos.begin(); it!=Cuerpos.end(); it++)
      (*it)->ActualizarPosicion();
}
