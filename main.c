#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculus.h"

double func(double x) {
    double y;
    y = atan(x);
    return y;
}


int main() {
    double (*pfunc)(double x);
    pfunc = func;
    double res;
    res = integrate(0, 1, 0.0000001, pfunc);
    printf("result: %f", res);
    return 0;
}

