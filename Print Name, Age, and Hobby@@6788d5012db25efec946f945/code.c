#include <stdio.h>

int main() {
    char name[20];
    int age;
    char hobby[20];
    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%c",&hobby);
    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c",hobby);

    return 0;
}