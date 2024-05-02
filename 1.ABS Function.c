#include<stdio.h>
int ABS(int x)
{
    int a = x;
    if (x<0)
    {
        a = a * (-1);
    }
    return a;
}
int main ()
{
    int a,b;
    scanf ("%d",&b);
    a = ABS(b);
    printf ("%d\n",a);
    return 0;
}
