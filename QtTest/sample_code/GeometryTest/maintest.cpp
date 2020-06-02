#include <QtTest/QtTest>

#include "circletest.h"
#include "squaretest.h"

int main()
{
    CircleTest ct;
    QTest::qExec(&ct);

    SquareTest sq;
    QTest::qExec(&sq);

    return 0;
}

