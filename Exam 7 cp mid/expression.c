#include<stdio.h>
int main()
{
    double x=5,y=4,z,g,b=4,c=72;
    int p=16,q=10,m;
    z=(0.3*(x/y)*(x/y))/pow((x-y),(2/3));
    g=sqrt((b*b-c*c)/c*c);
    m=p>>2+b<<3;
    printf("%d\n",m);
    printf("%lf /n %lf ",z,g);
    return 0;
}
