#include<stdio.h>
int main(void) {
    for(int i=0; i<10; i++) {
        printf("message: %d\n",i);
        if(i==7) break;
    }
    return 0;
}