#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("%c",j-1+'A');
        }
        print("\n");
    }
    return 0;
}