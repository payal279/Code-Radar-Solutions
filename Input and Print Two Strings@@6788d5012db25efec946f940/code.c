#include <stdio.h>

int main() {
    char value[100],name[100];
    scanf("%s",&value);
    scanf("%s",&name);
    printf("You entered: %s",value+'and'name);
    return 0;
}