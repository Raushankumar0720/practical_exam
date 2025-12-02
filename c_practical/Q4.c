#include <stdio.h>

int main(){

    char l = 'A';

    if( l == 'a' || l == 'e' ||l == 'i' ||l == 'o' ||l == 'u' ||l == 'A' ||l == 'E' ||l == 'I' ||l == 'O' ||l == 'U' ){
        printf("It is vowel");
    }
    else{
        printf("Consonant");
    }

    return 0;
}