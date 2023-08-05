#include <stdio.h> 

int main(){
    int i = 34;
    int *p=&i;
    printf("the value of p is %u\n",p);
    p++;
    printf("the value of p is %u\n",p);
     return 0;
}