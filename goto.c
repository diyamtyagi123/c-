#include <stdio.h> 

int main(){
    int a,b;
    printf("Enter first no.\n");
    scanf("%d", &a);
    printf("Enter second no.\n");
    scanf("%d", &b);
    goto add;
    goto sub;
    goto mul;

    add:
    printf("the sum is %d\n", a+b);
    sub:
    printf("the difference is %d\n", a-b);
    mul:
    printf("the product is %d\n", a*b);
     return 0;
}