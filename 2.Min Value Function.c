#include<stdio.h>
int MIN(int x,int y)
{
    int m;
    if (x<y)
    {
        m=x;
    }
    else if (x>y)
    {
        m=y;
    }
    return m;
}
int main ()
{
    int a,b,m;
    scanf ("%d %d",&a,&b);
    m = MIN(a,b);
    printf ("%d\n",m);
    return 0;
}
