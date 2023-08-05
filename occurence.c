#include <stdio.h> 
int occurence(char st[] , char c){
    char *ptr = st;
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count+=1;
        }
        ptr++;
    }
    return count;
}
int main(){
    char a;
    char st[] = "diyamtyagi";
    scanf("%c",&a);
    int x = occurence(st,a);
    printf("%d %c\n",x,a);
    return 0;
}