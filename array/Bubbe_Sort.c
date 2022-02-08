#include<stdio.h>

void main()
{
    int a[100], n;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for (int i=n-1; i>0; i--)
        for (int j=0; j<i; j++)
            if (a[i]<a[j])
            {
                a[i]+=a[j];
                a[j]=a[i]-a[j];
                a[i]-=a[j];
            }
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
}
