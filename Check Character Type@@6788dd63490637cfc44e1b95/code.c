#include <stdio.h>
int main(){
char ch;
scanf("%c",&ch);
if(ch>='a' && ch<='z')||(ch>='A'' && a<='Z'){
    if(ch='a'||ch='e'||ch='i'||ch='o'||ch='u'||ch='A'||ch='E'||ch='I'||ch='O'||ch='U'){
        printf("Vowel\n");
    else{
        printf("Consonant\n");
    }
else if( ch>='0' && ch<='9'){
    printf("Digits\n");
}
else {
    printf("Special Character");
}
    }
    return 0;
}
}
