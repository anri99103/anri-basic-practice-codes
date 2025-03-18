#include <stdio.h>
int main(void) {
    printf("%f\n",1.03*9);
    double tax = 1.08;
    printf("%f\n",360 * 1.08);
    printf("%d\n", (int)(360 * 1.08));

    int large = 10000;
    int medium = 500;
    int small = 3;
    int minus = -20000;

    printf("A is %6d. \n", large);
    printf("B is %6d. \n", medium);
    printf("C is %6d. \n", small);
    printf("D is %6d. \n", minus);

    double pi = 3.141592;
    printf("%.0f\n",pi);
    printf("123456\n");
    return 0;
}