#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    if (a<60){
        printf("Not eligible");
    }
    else{
        printf("Eligible");
    }
    return 0;
}