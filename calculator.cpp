#include "calculator.h"

//Zaryshniak Maxym
//IO - 04
//AK-2
//Lab-2
//maxymzaryshniak@gmail.com

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
