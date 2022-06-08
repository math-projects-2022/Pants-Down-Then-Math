#define _USE_MATH_DEFINES
#include "integral.h"
#include "math.h"
// функция
double function(double x, int s) { // rec
    switch (s)
    {
    case 1:
        return -x+(x/pow(M_E,x));
    case 2:
        return (x-pow(M_E,2))/ (x + pow(M_E, 2));
    case 3:
        return x / (pow(x, 2) + 1);
    case 5:
        return (x+1)/(1+x+1);
    default:
        return 0.0;
    }
}
// оду
double ode(double x, double y, int s) { // rec
    switch (s)
    {
    case 1:
        return -(x+y-(y/x));
    case 2:
        return (1-pow(y,2))/(2*x);
    case 3:
        return -(2*x*pow(y,2)-y)/x;
    case 5:
        return (y/(1+x))-(pow(y,2)/(1+x));
    default:
        return 0.0;
    }
}
