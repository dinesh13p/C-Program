#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter a: ");
  scanf("%d", &a);

  printf("Enter b: ");
  scanf("%d", &b);

  if (a > b)
  {
    printf("a is the greatest number");
  }
  else
  {
    printf("b is the greatest number");
  }
  return 0;
}