#include<stdio.h>
int main(void) {
    int data;
    double data2;
    printf("Input int data: ");
    scanf("%d",&data);
    printf("%d\n",data);

    printf("Input double data2: ");
    scanf("%lf",&data2);
    printf("%.2f\n",data2);

    //scanf("%d%lf",&data, &data2);
    //printf("%d, %f\n",data,data2);

    scanf("%d, %lf", &data, &data2);
    printf("%d, %f\n",data,data2);

    return 0;
}