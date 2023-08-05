#include <stdio.h> 
int find(int x) { 
    if (x == 0)  
        return 0;  
    else
        return (x % 2 + 10 * find(x / 2)); 
} 
int main(){
    int i;
    printf("enter the number :");
    scanf("%d",&i);
    printf("%d\n",find(i));
     return 0;
}