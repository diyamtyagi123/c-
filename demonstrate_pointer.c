#include <stdio.h> 

int main(){
    int i= 34;
    int *j = &i; //j will now store the value of i..
    printf("The value of i is %d\n ", i);
    printf("The value of i is %d\n ", *j);
    printf("The address of i is %u\n ", &i);
    printf("The address of i is %u\n ", j);
    printf("The address of j is %u\n ", &j);
    printf("The value of j is %u\n ", *(&j));  //*(&j) = value on address of j

     return 0;
}