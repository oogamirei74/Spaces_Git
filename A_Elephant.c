#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
 
    int a, b, c, d, e, f, g, h;
    a = x / 5;
    b = x % 5;
    c = b / 4;
    d = b % 4;
    e = d / 3;
    f = d % 3;
    g = f / 2;
    h = f % 2;
 
    printf("%d", a + c + e + g + h);
    return 0;
}