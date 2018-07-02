//
// Created by Eric Choo on 2018/7/2.
//

#include <math.h>
#include <stdio.h>
#include "calculus.h"

double integrate(double x1, double x2, double eps, double (*func)(double)) {
    int i, n;
    double fx1, fx2, h, t1, p, s, x;
    double result = 0.0;
    fx1 = func(x1);
    fx2 = func(x2);
    n = 2;
    h = x2 - x1;
    t1 = h * (fx1 + fx2) / 2.0;
    p = eps * 2;
    while (p >= eps) {
        s = 0.0;
        for (i = 0; i < n; ++i) {
            x = x1 + (h / n) * i;
            s += func(x);
        }
        result = (t1 + h * s) / n;
        n *= 3;
        p = fabs(t1 - result);
        t1 = result;
    }
    return result;
}