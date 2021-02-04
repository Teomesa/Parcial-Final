#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fisicas.h>
#include <QGraphicsScene>
#include <QTimer>
#include <QList>

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
    Fisicas *cuerpo;
    QList<Fisicas *>Cuerpos;
};
#endif // MAINWINDOW_H
