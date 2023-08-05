#include <stdio.h> 
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee facebook[100];
    facebook[0].code=100;
    facebook[0].salary=10000;
    strcpy(facebook[0].name, "diyam");

    facebook[1].code=101;
    facebook[1].salary=20000;
    strcpy(facebook[1].name, "nakul");

    facebook[2].code=102;
    facebook[2].salary=30000;
    strcpy(facebook[2].name, "gaman");

    printf("done");
     return 0;
}