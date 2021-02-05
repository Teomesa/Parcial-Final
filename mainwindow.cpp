#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena = new QGraphicsScene(this);
    escena->setSceneRect(0,-330,495,435);
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
    double YO=ui->YO->text().toDouble();
    double YD=ui->YD->text().toDouble();
    double d=ui->Distance->text().toDouble();
    double v=ui->LE_Vel->text().toDouble();
    double a= ui->LE_angulo->text().toDouble();
    a=(a*3.14159)/180;
    canonD.push_back(new canon_def(d,YD));
    escena->addItem(canonD.back());
    canonO.push_back(new canon_of(0,YO));
    escena->addItem(canonO.back());
    Cuerpos.push_back(new Fisicas(70,YO,v,a));
    escena->addItem(Cuerpos.back());
    Cuerpos.push_back(new Fisicas(d,YD,-v,-a));
    escena->addItem(Cuerpos.back());
    timer->start(5);
}

void MainWindow::mover()
{
   QList<Fisicas*>::iterator it;
   for(it=Cuerpos.begin(); it!=Cuerpos.end(); it++)
      (*it)->ActualizarPosicion();
}
