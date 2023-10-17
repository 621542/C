#include <stdio.h>

int main()
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    scanf("(%d,%d) (%d,%d)", &x1, &y1, &x2, &y2);
    int m, n;
    m = y2 - y1;
    n = x2 - x1;
    int dx = 0;
    int dy = 0;
    int k = m/n;
    if("k <= 1 && k >= -1")
    {
        dx = n;
        dy = k * dx;
    }
    else
    {
        dy = m;
        dx = dy / k;
    }
    int d1 = 0;
    int d2 = 0;
    int xk = 0;
    int yk = 0;
    for(xk = x1; xk <= x2; xk++);
    for(yk = y1; xk <= y2; yk++);
    d1 = k * ( xk + 1) - x1*m/n + y1;
    d2 = yk + 1 - k*(xk + 1) + x1*m/n - y1;
    int yk1 = 0;
    int xk1 = xk + 1;
    if("d1 < d2")
    {
        yk1 = yk;
    }
    else
    {
        yk1 = yk + 1;
    }
    printf("(%d,%d)\n", xk1, yk1);

     return 0;
}
