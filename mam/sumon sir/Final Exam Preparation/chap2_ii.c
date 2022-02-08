#include<stdio.h>
int main()
{
    /*int series_num=100;
    series_num=series_num+23;
    printf("%d\n",series_num);
    series_num=10;
    printf("%d",series_num);
    return 0;*/
    static int y=0;
    for (int i=0;i<10 ;i++ ){
        static int x=10;
        x++;
        y++;
        printf("x=%d ,y=%d\n",x,y);
    }
}
