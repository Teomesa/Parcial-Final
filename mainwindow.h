#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fisicas.h>
#include <QGraphicsScene>
#include <QTimer>
#include <QList>
#include <canon_def.h>
#include <canon_of.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pntSimular_clicked();
    void mover();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *escena;
    QTimer *timer;
    QList<canon_def *>canonD;
    QList<canon_of *>canonO;
    QList<Fisicas *>Cuerpos;

};
#endif // MAINWINDOW_H
