#include "integral.h"
#include "math.h"

double function(double x, int s) { // rec
    switch (s)
    {
    case 1:
        return x;
    case 2:
        return x+1;
    case 3:
        return sqrt(x);
    case 4:
        return pow(x, 2);
    case 5:
        return pow(x,3);
    case 6:
        return sin(x);
    case 7:
        return cos(x);
    case 8:
        return pow(sin(x)-cos(x),2);
    default:
        return 0.0;
    }
}

double sumofInt(double lbound, double ubound, int n, double dx, int s) { // rec
    double recarea;
    double funcvalue;
    double xi;
    double sum = 0;
    if (s == 3) {
        for (int i = 1; i < n; i++) {
            xi = lbound + i * dx;
            if (xi == 0) {
                recarea = 0;
            }
            else {
                funcvalue = function(xi, s);
                recarea = funcvalue * dx;
            }
             sum += recarea;
        }   
    }
    else {
        for (int i = 1; i < n; i++) {
            double xi = lbound + i * dx;
            double funcvalue = function(xi, s);
            double recarea = funcvalue * dx;
            sum += recarea;
    }
    }
    sum = round(sum * 100000000000) / 100000000000;
    return sum;
}

double sumofIntTrap(double lbound, double ubound, int n, double dx, int s) { // trapezoid
    double sum = 0;
    double f1 = function(lbound,s);
    double f2 = function(ubound,s);
    double tf;
    double xi;
    if (s == 3) {
        for (int i = 1; i < n; i++) {
            xi = lbound + (i * dx);
            if (xi == 0) {
                tf = 0;
            }
            else {
                tf = function(xi, s);
                tf = tf * 2;
            }
            sum = sum + tf;
        }
    }
    else {
    for (int i = 1; i < n; i++) {
        xi = lbound + (i * dx);
        tf = function(xi, s);
        tf = tf * 2;
        sum = sum + tf;
    }
    }
    sum = sum + f1 + f2;
    sum = (dx * sum) / 2;
    sum = round(sum * 100000000000) / 100000000000;
    return sum;
}


double sumofIntSimp(double lbound, double ubound, int n, double dx, int s) { // simp
    double sum = 0;
    double f1 = function(lbound, s);
    double f2 = function(ubound, s);
    bool flag = 0;
    double tf;
    double xi;
    
    if (s == 3) {
        for (int i = 1; i < n; i++) {
            xi = lbound + (i * dx);
            if (flag == 0) {
                if (xi == 0) {
                    tf = 0;
                }
                else {
                    tf = function(xi, s);
                    tf = tf * 4;
                }
                sum = sum + tf;
                flag = 1;
            }
            else {
                if (xi == 0) {
                    tf = 0;
                }
                else {
                    tf = function(xi, s);
                    tf = tf * 2;
                }
                sum = sum + tf;
                flag = 0;
            }
        }
    }
    else {
        for (int i = 1; i < n; i++) {
            xi = lbound + (i * dx);
            if (flag == 0) {
                tf = function(xi, s);
                tf = tf * 4;
                sum = sum + tf;
                flag = 1;
            }
            else {
                tf = function(xi, s);
                tf = tf * 2;
                sum = sum + tf;
                flag = 0;
            }
        }
    }

    sum = sum + f1 + f2;
    sum = (dx * sum) / 3;
    sum = round(sum * 100000000000) / 100000000000;
    return sum;
}