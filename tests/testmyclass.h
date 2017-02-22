#ifndef TESTMYCLASS_H
#define TESTMYCLASS_H


#include <QObject>
#include "src/myclass.h"

class TestMyClass : public QObject {
    Q_OBJECT
private:
    MyClass myClass;
private slots:
    void init();
    void testAdd();
    void testMultiply();
};

#endif // TESTMYCLASS_H
