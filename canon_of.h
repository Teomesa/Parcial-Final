#ifndef CANON_OF_H
#define CANON_OF_H
#include <math.h>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
using namespace std;

class canon_of: public QGraphicsItem
{
private:
    float d ;
    float Ho ;
    float Xo ;
    float Yo ;
    float d0 ;
public:
    canon_of(float distancia,float alturaof);
    float getYo() const;
    float getD0() const;
    float getXo() const;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR);
};

#endif // CANON_OF_H
