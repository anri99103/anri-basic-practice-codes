#include<stdio.h>
int main(void) {
    int price;
    printf("Input price: ");
    scanf("%d",&price);
    printf("discount -1 is %d.\n",(int)(price*0.9));
    printf("discount -3 is %d.\n",(int)(price*0.7));
    printf("discount -5 is %d.\n",(int)(price*0.5));
    printf("discount -8 is %d.\n",(int)(price*0.2));
    return 0;
}