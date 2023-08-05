#include <stdio.h>
#include <string.h> 
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1;
    e1.code = 100;
    e1.salary = 50000;
    strcpy(e1.name,"diyam");
    printf("%.2f", e1.salary);
     return 0;
}