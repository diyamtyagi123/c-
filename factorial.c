#include <stdio.h> 

int main(){
    int i, factorial = 1, n;
    printf("enter the no. ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        factorial *= i;
    }
    printf("the value of factorial %d is %d..\n",n, factorial);
     return 0;
}   