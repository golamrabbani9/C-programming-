#include <stdio.h>
int main() {

  int i, n;
  int t1 = 0, t2 = 1;


  int nextTerm = t1 + t2;


  printf("Enter the number of terms: ");
  scanf("%d", &n);


  printf("Fibonacci Series: %d, %d, ", t1, t2);

  i = 3;
  do {
    ++i;
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  while( i <= n);

  return 0;
}


