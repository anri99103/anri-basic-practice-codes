#include <stdio.h>
int main(void) {
    int allowance = 1;
    int month = 1;
    while(allowance < 1000000) {
        // allowance *= 2;
        // printf("The month is %d.\n",month);
        // printf("The allowance is %d yen.\n",allowance);
        // month++;
        printf("%2d month: %7d yen.\n",month,allowance);
        allowance *= 2;
        month++;
    }
  //  printf("break month: %d",month);
    printf("Over one million yen month is: %d",month);
    return 0;
}