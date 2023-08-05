#include <stdio.h>
int prime(int n, int i){
    if(i == 1)
        return 1;   
    else{
        if(n%i == 0)
            return 0;
        else
            prime(n, i-1); 
    }
}
int main(){
    int x;
    printf("enter the no. ");
    scanf("%d", &x);
    int p = prime(x,x/2);
    if (p == 1){
        printf("This is a prime number..\n");
    }
    else{
        printf("This is not a prime number..\n");
    }
    return 0;
}