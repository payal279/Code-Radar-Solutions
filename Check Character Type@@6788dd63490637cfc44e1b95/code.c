#include <stdio.h>
char ch;
scanf("%c",&ch);
if(ch>='a' && ch<='z'){
    if(ch='a'||ch='e'||ch='i'||ch='o'||ch='u'){
        printf("Vowels");
    else{
        printf("Consonant");
    }
else if( ch>=0 && ch<=9){
    printf("Digits");
}
else {
    printf("Special Character");
}
    }
    return 0;
}
