#include <stdio.h> 

int main(){
    int num ;
    int num2;
    printf("enter the no. to divide \n");
    scanf("%d" , &num );

    printf("enter the no. from which to divide \n");
    scanf("%d" , &num2 );
    printf("divisiblity test result %d \n" , num%num2 );
     return 0;
}