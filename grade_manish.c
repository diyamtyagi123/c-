#include <stdio.h>

int main()
{
    int percent;
    printf("Enter your percentage - ");
    scanf("%d", &percent);
    switch(percent/10){
        case 9:
            printf("Your grade is A \n");
            break;
        case 8:
            printf("Your grade is B \n");
            break;
        case 7:
            printf("Your grade is C \n");
            break;
        case 6:
            printf("Your grade is D \n");
            break;
        case 5:
            printf("Your grade is E \n");
         break;

        default:
            printf("Invalid rating \n");
            break;
    }
    return 0;
}