#include <stdio.h>

struct student {
    int id;
    char name[50];
    float marks[3];
};

int main(){

    struct student s1 = { 1 , "rk" , {1,2,3}};

    printf("%d\n",s1.id);
    printf("%s\n",s1.name);
    printf("%f\n  %f\n  %f\n",s1.marks[0],s1.marks[1],s1.marks[2]);

    
    return 0;
}