#include <stdio.h>

int main() {
    int i,j,n1;
    scanf("%d",&n1);
    for(i=1;i<=n1;i++){
        for(j=1;j>=n1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}