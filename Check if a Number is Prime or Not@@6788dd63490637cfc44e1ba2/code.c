#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);
    if ( a>1){
       for (i=1;i<=a%i==0;i++){
            printf("Prime");
        }
    }
    else{
        printf("Not Prime");
    }
    return 0;
}