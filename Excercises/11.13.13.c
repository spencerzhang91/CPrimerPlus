#include <stdio.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[])
{
    double base, exp, res;
    base = strtod(argv[1]);
    exp = strtod(argv[2]);
    res = pow(base, exp);
    printf("%.1lf ^ %.1lf = %.1lf\n", base, exp, res);
    return 0;
}
