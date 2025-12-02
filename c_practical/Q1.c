#include <stdio.h>

int main(){

    int sum = 0;

    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    
        for(int j = 0; j < 3; j++){
            sum += mat[1][j];
        }
    
    printf("%d",sum);

    return 0; 

}