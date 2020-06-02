#ifndef CIRCLETEST_H
#define CIRCLETEST_H

#include <QObject>
#include <QtTest/QtTest>

#include "../Geometry/circle.h"

class CircleTest : public QObject
{
    Q_OBJECT
public:
    explicit CircleTest(QObject *parent = 0);

private:
    Circle *c1;
    Circle *c2;

private slots:
    void initTestCase();
    void testRadius();
    void testArea();
    void cleanupTestCase();

};

#endif // CIRCLETEST_H
