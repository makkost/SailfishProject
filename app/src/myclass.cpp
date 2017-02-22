#include "myclass.h"

MyClass::MyClass()
{

}

MyClass::MyClass(int first, int second) {
    firstValue = first;
    secondValue = second;
}

int MyClass::add() const {
    return firstValue + secondValue;
}

int MyClass::multiply() const {
    return firstValue * secondValue;
}
