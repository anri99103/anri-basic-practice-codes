#include<stdio.h>
int main(void) {
    int juice_price = 198;
    int milk_price = 138;
    double tax = 1.05;
    int pocket_money = 1000;
    int payment = (int)((juice_price*1 + milk_price*2) * tax);
    int change = pocket_money - payment;
    printf("The amount of paymant is %d.\n", payment);
    printf("Your change is %d.\n",change);

}