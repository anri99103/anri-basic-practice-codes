#include<stdio.h>
int main(void) {
    int r;
    double s;
    do {
        printf("radius?: ");
        scanf("%d",&r);
    } while(r<0);
    
    s = r*r*3.14;
    printf("square is %f.\n",s);
    
    return 0;
}