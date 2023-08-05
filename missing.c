#include <stdio.h> 

int main(){
    long long int a, b, sum=0;
    scanf("%164d",&a);
    for(int i =1;i<a;i++){
        scanf("%164d",&b);
        sum += b;
    }
    
    printf("%164d",sum);
    return 0;
}