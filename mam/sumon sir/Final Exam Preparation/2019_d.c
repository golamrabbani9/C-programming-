#include<stdio.h>
int main()
{
    for( int x=1; x<=12; x++)
        for( int y=1; y<=12; y++)
        {
            if(y%2==0){
                break;
            }
            printf("%d.Rangpur\n",x);
        }

    return 0;
}
