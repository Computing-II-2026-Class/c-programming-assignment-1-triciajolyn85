/* Name:BASAIJA PATRICIA */
/* Student Number: 25/U/BIE/01362/PE*/

#include <stdio.h>

int main(void)
{
     int units;
    float cost_per_unit,total_bill;
    printf("Enter units consumed:");
    scanf("%d",&units);

    printf("Enter cost per unit:");
    scanf("%f", &cost_per_unit);

    total_bill =units*cost_per_unit;
    

    printf("\nTotal bill:%2fUGX\n",total_bill);
    

    return 0;
}
