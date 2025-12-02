#include <stdio.h>

int main(){

    int a;
    int b;
    char op;

    scanf("%d %d %c",&a,&b,&op);

    switch(op){
        case '+': printf("%d + %d = %d",a,b,(a+b));break;
        case '-': printf("%d - %d = %d",a,b,(a-b));break;
        case '*': printf("%d * %d = %d",a,b,(a*b));break;
        case '/': printf("%d / %d = %d",a,b,(a/b));break;
        
        case '%': if(b == 0){
            printf("Not defined");
        }
        else{
            printf("%d %%  %d = %d",a,b,(a%b));break;
        }

        default:("Invalid operator");



    }

    return 0;
}