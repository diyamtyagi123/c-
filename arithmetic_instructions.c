#include <stdio.h>  
#include <math.h>

int main(){
    int a = 10, b= 5;
    printf("The value of a+b is %d  \n", a + b);
    printf("The value of a-b is %d  \n", a - b);
    printf("The value of a*b is %d  \n", a * b);
    printf("The value of a/b is %d  \n", a / b); // (%) is used for remiander..

    int z;
    z = a*b; // legal
    // a*b = z // illigal
    printf("The value of z is %d  \n", z );
    printf("The value of a^b is %f  \n", pow(a , b)); 

    
     return 0;
}