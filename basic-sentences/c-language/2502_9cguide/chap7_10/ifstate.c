#include <stdio.h>
int main(void) {
    int suuti;
    scanf("%d",&suuti);
    if(suuti == 10) {
        printf("Input value is 10. \n");
    }
    if(suuti != 10) {
        printf("Input value is not 10. \n");
    }
    if(suuti >= 8 && suuti <= 12) {
        printf("between 8 to 12. \n");
    }
    if(!(suuti >= 8 && suuti <= 12)) {
        printf("NOT between 8 to 12. \n");
    }

    return 0;
}