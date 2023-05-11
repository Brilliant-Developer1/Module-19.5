#include <stdio.h>
int main()
{
    float percent, sale_price;
    scanf("%f %f", &percent, &sale_price);

    float org_price = sale_price * 100 / (100 - percent);

    printf("%.2f", org_price);
    return 0;
}