#include<stdio.h>
int main(void) {
    int min, max, sum;
    printf("Please Input min, max value.\n");

    printf("min: ");
    scanf("%d",&min);
    printf("max: ");
    scanf("%d",&max);
    printf("The min is %d, max is %d.\n",min,max);

    sum = (min+max) * (max-min+1)/2;
    printf("The sum is %d.\n",sum);

    return 0;
}