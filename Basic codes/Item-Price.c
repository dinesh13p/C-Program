#include <stdio.h>
int main()
{
  float CricketBat, Ball, Tshirt, Laptop;
  printf("Enter the price of Cricket-Bat: ");
  scanf("%f", &CricketBat);
  printf("Enter the price of Ball: ");
  scanf("%f", &Ball);
  printf("Enter the price of Tshirt: ");
  scanf("%f", &Tshirt);
  printf("Enter the price of Laptop: ");
  scanf("%f", &Laptop);

  float Total;
  Total = CricketBat + Ball + Tshirt + Laptop;
  printf("The total price of given items: %.2f\n", Total);
  return 0;
}