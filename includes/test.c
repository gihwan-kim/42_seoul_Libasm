#include <stdio.h>

int sum(int a, int b)
{
    int c;
    c = a+b;
    return c;
}

int main()
{
    int d = 1;
    int e = 2;
    int f;

    f = sum(d,e);
    return 0;
}