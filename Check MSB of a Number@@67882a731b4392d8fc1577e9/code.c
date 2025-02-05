#include <stdio.h>

int main() {
    int a,i=1,mask;
    scanf("%d",&a);
    mask=1>>(i-1);
    if(a & mask){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}