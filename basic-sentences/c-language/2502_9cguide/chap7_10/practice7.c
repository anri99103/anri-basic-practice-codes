#include<stdio.h>
int main(void) {
    int year;
    printf("Input year:");
    scanf("%d",&year);

    //1896年より前: オリンピックが存在しない
    if(year < 1896) {
        printf("not existed Olympics.");
        return 0;
    }
    //1896~1923年: 夏季オリンピックのみ開催
    if((1896 <= year) && (year < 1924)) { 
        if(year %4 == 0) {
            printf("only held summer Olympics.");
        } else {
            printf("not held summer Olympics.");
        }
        return 0;
    }
    //1924~1992年: 夏季冬季オリンピック同時開催
    if((1924 <= year) && (year <= 1992)) {
        if(year %4 == 0) {
            printf("held summer and winter Olympics in same year.");
        } else {
            printf("not held summer and winter Olympics.");
        }
        return 0;
    }
    //1993年以降～：2年ごとに夏季オリンピック、4年ごとに冬季オリンピック開催。
        if(year %4 == 0) {
            printf("held summer Olympics!");
        } else if(year % 2 == 0) {
            printf("held winter Olympics!");
        } else {
            printf("not held Olympics.");
        }

return 0;
}