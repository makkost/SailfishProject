#include <QtTest/QtTest>
#include "src/myclass.h"
#include "testmyclass.h"

void TestMyClass::init() {
    myClass =  MyClass(4, 2);
}

void TestMyClass::testAdd() {
    QCOMPARE(myClass.add(), 6);
}

void TestMyClass::testMultiply() {
    QCOMPARE(myClass.multiply(), 8);
}
