#include <stdio.h>
#include <string.h> 
int main(){
    long long int n=1000000;
    char st[n]; 
    scanf("%s", &st);
    int count=1;
    int max =0;
    char s=st[0];
    for(int i=1;st[i] != '\0';i++){
        if(s==st[i]){
            count++;
        }
        else{
            s=st[i];
            if(max<count){
                max=count;
            }
            count=1;
        }
    }
    if(max<count){
        max=count;
    }
    printf("%d",max);
    return 0;
}