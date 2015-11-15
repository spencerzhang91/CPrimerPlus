/* 16.17.3.c */
#include <stdio.h>
#include <math.h>

struct recta_v {
    double x;
    double y;
};

struct polar_v {
    double magnitude;
    double angle;
};

const double PI = 3.1415926;

struct recta_v trans(struct polar_v);   // declare transform function

int main(void)
{
    struct polar_v coor_origin = {1.0, 60.0};
    struct recta_v coor_result;
    coor_result = trans(coor_origin);
    
    printf("x = %.2f  y = %.2f\n", coor_result.x, coor_result.y);
    return 0;
}

struct recta_v trans(struct polar_v coor)
{
    double radian = coor.angle / 180.0 * PI;
    struct recta_v res;
    res.x = coor.magnitude * cos(radian);
    res.y = coor.magnitude * sin(radian);
    
    return res;
}
