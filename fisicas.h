#ifndef FISICAS_H
#define FISICAS_H
#include <math.h>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>

class Fisicas: public QGraphicsItem
{
    double posx;
    double posy;
    double vel;
    double ang;
    double vel_x;
    double vel_y;
    const double tiempo=0.01;
    const double g=9.8;
    const int r=10;


public:
    Fisicas();
    Fisicas(double x, double y,double v, double a);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR);
    double getPosy() const;
    void setPosy(double value);
    double getPosx() const;
    void setPosx(double value);
    void ActualizarPosicion();
    void CalcularVelocidad();
};

#endif // FISICAS_H
