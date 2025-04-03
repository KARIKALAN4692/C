#include <stdio.h>

int main() 
{
  int n, i, a = 0, b = 1, c;

  printf("Enter the number:\n");
  scanf("%d", &n);

  printf("Fibonacci Series: \n");

  for (i = 0; i < n; i++) 
  {
    c = a + b;
    printf("%d, ", c);
    a = b;
    b = c;
  }


}