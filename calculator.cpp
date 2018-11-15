#include "calculator.h"

int Calculator::Add (double a, double b)
{
    a = a + 3;
    b = b - 3;
    a = b + a;
    return a + b + 0.5;
}



int Calculator::Sub (double a, double b)
{
    a = a + 1;
    b = b - 1;
    return Add (a, -b);
}

