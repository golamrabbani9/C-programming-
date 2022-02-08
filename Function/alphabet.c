#include <stdio.h>
int main() {
   int i, space, n, k;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i = 1; i <= n; i++) {
      for (space = 1; space <= n - i; ++space) {
         printf("  ");
      }
      for (k=0;k<2 * i - 1;++k) {
         printf("%c ",k+65);

      }
      printf("\n");
   }
   return 0;
}
//Golam Rabbani

