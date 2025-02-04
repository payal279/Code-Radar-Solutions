#include <stdio.h>

int main() {
    int i,j,n1;
    scanf("%d",&n1);
    for(i=1;i<=n1;i++){
        for(j=n1;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}