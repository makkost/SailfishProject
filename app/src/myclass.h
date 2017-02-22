#ifndef MYCLASS_H
#define MYCLASS_H


class MyClass {
public:
    MyClass();
    MyClass(int first, int second);
    int add() const;
    int multiply() const;
private:
    int firstValue, secondValue;
};

#endif // MYCLASS_H
