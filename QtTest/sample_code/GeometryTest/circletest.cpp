#include "circletest.h"

CircleTest::CircleTest(QObject *parent) :
    QObject(parent)
{
}

void CircleTest::initTestCase()
{
    c1 = new Circle();
    c2 = new Circle(10);
}

void CircleTest::testArea()
{
    QVERIFY(true == false);
    QCOMPARE(c1->getArea(), 3.14);
    QCOMPARE(c2->getArea(), 314.0);
}

void CircleTest::testRadius()
{
    QCOMPARE(c1->getRadius(), 1.0);
    QCOMPARE(c2->getRadius(), 10.0);
}

void CircleTest::cleanupTestCase()
{
    delete c1;
    delete c2;
}
