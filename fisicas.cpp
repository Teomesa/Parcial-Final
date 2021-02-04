#include "fisicas.h"


double Fisicas::getPosy() const
{
    return posy;
}

void Fisicas::setPosy(double value)
{
    posy = value;
}

double Fisicas::getPosx() const
{
    return posx;
}

void Fisicas::setPosx(double value)
{
    posx = value;
}

void Fisicas::ActualizarPosicion()
{
    CalcularVelocidad();
    posx=posx+vel_x*tiempo;
    posy=posy+vel_y*tiempo-(0.5*g*tiempo+tiempo);
    setPos(posx,-posy);
}

void Fisicas::CalcularVelocidad()
{
    vel_x=vel*cos(ang);
    vel_y=vel*sin(ang)-g*tiempo;
    ang=atan2(vel_y,vel_x);
    vel=sqrt(pow(vel_y,2)+pow(vel_x,2));
}

Fisicas::Fisicas()
{

}

Fisicas::Fisicas(double x, double y, double v, double a)
{
    posx=x;
    posy=y;
    vel=v;
    ang=a;
    setPos(posx,-posy);
}

QRectF Fisicas::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void Fisicas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->setBrush(Qt::blue);
  painter->drawEllipse(boundingRect());
}
