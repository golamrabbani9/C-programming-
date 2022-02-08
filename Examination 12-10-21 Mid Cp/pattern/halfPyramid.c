/* step-1:start
step2: initialize variable i,j,n
step 3: two loop
step 4: in loop print *
step 5: print \n
step 6: finished
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter row: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}

