#include<stdio.h>
int main(void) {
    int age;
    printf("Input age: ");
    scanf("%d",&age);

    // if(age <= 3) {
    //     printf("baby, free!\n");
    // }
    // if(age >= 4 && age <= 12) {
    //     printf("child, 250yen.\n");
    // }
    // if(age >= 13) {
    //     printf("adult, 400yen.\n");
    // }

    if(age <= 3) {
        printf("baby, free!\n");
    } else if(age <= 12) {
        printf("child, 250yen.\n");
    } else {
        printf("adult, 400yen.\n");
    }

    return 0;
}