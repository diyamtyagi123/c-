#include <stdio.h> 

int main(){
    int age ;
    printf("Enter your age - \n");
    scanf("%d", &age);

    if(age<=70 && age>=18){    // && is used for and , || is used for or 
        printf("You can drive the car..\n");
    }
    else{
        printf("You can not drive the car..\n");
    }
     return 0;
}