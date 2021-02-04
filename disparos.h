#ifndef DISPAROS_H
#define DISPAROS_H
#include <math.h>
#include <QPainter>
#include <QGraphicsItem>
#include <QRectF>

class Disparos: public QGraphicsEllipseItem
{
private:
    double velocidadx;
    double velocidady;
    double angle;
    unsigned short int tipo;
public:
    Disparos(double posicionInicialx_, double posicionInicialy_, double velocidadx_, double velocidady_, unsigned short int tipo_);
    double getPosicionx();  //muestra la posicion en x
    double getPosiciony();  //muestra la posicion en y

    void actualizar(float dt);

    int getTipo(); //muestra el tipo de disparo que es
    double getAy(); //muestra la aceleracion en y
    double getVelocidadx(); //muestra la velocidad en x
    double getVelocidady(); //muestra la velocidad en y
    void setposx(double posx);
};

#endif // DISPAROS_H
