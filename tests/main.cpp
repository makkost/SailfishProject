#include <QtTest/QtTest>
#include "testmyclass.h"

int main() {
    TestMyClass testMyClass;
    QTest::qExec(&testMyClass);
}
