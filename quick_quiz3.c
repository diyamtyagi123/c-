#include <stdio.h> 

int main(){
    int i = 365;
    int *ptr;
    int **ptr_ptr;
    ptr = &i;
    ptr_ptr = &ptr;
    printf("the value of i is %d ", **ptr_ptr);

    return 0;
}