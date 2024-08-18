#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    float amount, originalprice;
    const float VAT = 13;
    printf("Enter the number of AC purchased: ");
    scanf("%d", &number);
    printf("Enter the amount of AC: ");
    scanf("%f", &amount);
    
    originalprice = number * amount;
    printf("The amount of all %d AC combined is %.2f\n", number, originalprice);

    float VATamount;
    VATamount = (originalprice/100 *13);
    printf("The VAT amount is: %.2f\n", VATamount);

    float priceafterVAT;
    priceafterVAT = originalprice + VATamount;
    printf("The final amount of %d number of AC after VAT is: %.2f\n", number, priceafterVAT);

    return 0;
}