#include <stdio.h>


int main() {
    int year;
    scanf("%d",&year);
    if (year==0&&year%100!=0||(year%4==0)){
        printf("Leap Year");
    }
    else{
        printf("Nota a Leap Year");
    }
    return 0;
}