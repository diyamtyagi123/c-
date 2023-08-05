#include <stdio.h> 
int occurence(char arr[]){
    int abc[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i=0;arr[i] != '\0';i++){
        abc[arr[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(abc[i]!=0)
        printf("%c -> %d\n",i+97,abc[i]);
    }
}
int main(){
    char st[] = "diyamtyagi";
    occurence(st);
    return 0;
}