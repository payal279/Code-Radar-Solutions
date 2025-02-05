#include <stdio.h>

int main() {
    int a,i,mark;
    scanf("%d",&a);
    mark=1<<(i-1);
    if (a & mark){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}