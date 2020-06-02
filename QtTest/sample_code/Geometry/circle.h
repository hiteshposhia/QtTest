#ifndef CIRCLE_H
#define CIRCLE_H

#include <QObject>

class Circle : public QObject
{
    Q_OBJECT
public:
    explicit Circle(QObject *parent = 0);
    explicit Circle(double radius, QObject *parent = 0);
    double getArea();
    double getRadius();

private:
    double radius;

signals:

public slots:

};

#endif // CIRCLE_H
