#include<stdio.h>
int main(void) {
    int score;
    printf("Input score: ");
    scanf("%d",&score);
    if(100 < score) {
        printf("Your input over 100, so corrected score 100.\n");
        score = 100;
    }
    printf("The score is %d.\n",score);
}