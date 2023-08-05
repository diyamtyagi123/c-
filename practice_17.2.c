#include<stdio.h>

void swap(int p,int q);
int main()
{
    int a,b;
	printf("\n\n enter numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);	
    swap(&a,&b);
    printf("\n %d %d \n\n",a,b);
    return 0;
}
void swap(int p,int q)
{
    int tmp;
    tmp = &p;
    &p=&q;   
    &q=tmp;  
}