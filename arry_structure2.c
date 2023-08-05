#include <stdio.h> 
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee diyam = {101 , 10000, "diyam"};
    printf(" Name is %s\n",diyam.name);
    printf(" Code is %d\n",diyam.code);
    printf(" Salary is %f\n",diyam.salary);
     return 0;
}