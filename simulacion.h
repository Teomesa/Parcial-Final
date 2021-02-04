#ifndef SIMULACION_H
#define SIMULACION_H

#include <QMainWindow>
#include <QMainWindow>
#include <fisicas.h>
#include <QGraphicsScene>
#include <QTimer>
#include <QList>

namespace Ui {
class Simulacion;
}

class Simulacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Simulacion(QWidget *parent = nullptr);
    ~Simulacion();

private:
    Ui::Simulacion *ui;
};

#endif // SIMULACION_H
