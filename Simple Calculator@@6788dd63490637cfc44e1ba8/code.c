#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    if (c=='+'){
        printf("%d\n",a+b);
    }
    else if(c=='-'){
        printf("%d\n",a-b);
    }
    else if(c=='*'){
        printf("%d\n",a*b);
    }
    else if(c=='/'){
        if(b==0){
            printf("Error");
        }
        else{
            printf("%d\n",a/b);
        }
    }
    else{
        printf("Error");
    }
    return 0;
}