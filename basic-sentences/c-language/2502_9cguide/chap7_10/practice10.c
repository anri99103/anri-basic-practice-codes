#include<stdio.h>
int main(void) {
    int score;
    do {
        printf("Input score: ");
        scanf("%d",&score);
    } while(score < 0 || 100 < score);

    printf("The score is %d.\n",score);

    return 0;
}