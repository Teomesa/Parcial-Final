#include "canon_of.h"

canon_of::canon_of(float distancia,float alturaof)
{
    d=distancia;
    Yo=alturaof;
    d0 = 0.05*d;
    setPos(0,-Yo);
}

float canon_of::getYo() const
{
    return Yo;
}

float canon_of::getD0() const
{
    return d0;
}

float canon_of::getXo() const
{
    return Xo;
}


QRectF canon_of::boundingRect() const
{
    return QRectF(-5,-7,80,80);
}

void canon_of::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap;
    pixmap.load(":/Img cañones/Cañon 1.png");
    painter->drawPixmap(boundingRect(), pixmap,pixmap.rect());
}

