#include <stdio.h>


int main() {
    char Light;
    scanf("%c",&Light)
    if(Light=='R''){
        printf("Stop");
    }
    else if(Light='G'){
        printf("Go");
    }
    else if(Light=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}