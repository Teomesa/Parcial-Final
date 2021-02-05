#include "canon_def.h"

canon_def::canon_def(float distancia,float alturadf)
{
    d=distancia;
    Yd=alturadf;
    setPos(d,-Yd);
    d0 = 0.025*d;
}

float canon_def::getXd() const
{
    return Xd;
}

float canon_def::getYd() const
{
    return Yd;
}

float canon_def::getD0() const
{
    return d0;
}

float canon_def::getD() const
{
    return d;
}


QRectF canon_def::boundingRect() const
{
    return QRectF(-5,-7,80,80);
}

void canon_def::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap;
    pixmap.load(":/Img cañones/Cañon 2.png");
    painter->drawPixmap(boundingRect(), pixmap,pixmap.rect());
}

