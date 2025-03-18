#include<stdio.h>
int main(void) {
    int month;
    printf("Input month: ");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("It's Mutsuki.\n");
        break;
    case 2:
        printf("It's Kisaragi.\n");
        break;
    case 3:
        printf("It's Yayoi.\n");
        break;
    case 4:
        printf("It's Uduki.\n");
        break;
    case 5:
        printf("It's Satsuki.\n");
        break;
    case 6:
        printf("It's Minatsuki.\n");
        break;
    case 7:
        printf("It's Fumiduki.\n");
        break;
    case 8:
        printf("It's Haduki.\n");
        break;
    case 9:
        printf("It's Nagatsuki.\n");
        break;
    case 10:
        printf("It's Kannaduki.\n");
        break;
    case 11:
        printf("It's Simotsuki.\n");
        break;
    case 12:
        printf("It's Siwasu.\n");
        break;
    
    default:
        printf("Not exist month number.\n");
        break;
    }
    return 0;
}