#include "circle.h"

Circle::Circle(QObject *parent) :
    QObject(parent)
{
    radius = 1;
}

Circle::Circle(double radius, QObject *parent) :
    QObject(parent)
{
    this->radius = radius;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

double Circle::getRadius()
{
    return radius;
}
