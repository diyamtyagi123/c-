#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;
complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
complex sub(complex n1, complex n2) {
    complex x;
    x.real = n1.real - n2.real;
    x.imag = n1.imag - n2.imag;
    return (x);
}
int main() {
    complex n1, n2, result_sum , result_sub;
 
    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result_sum = add(n1, n2);
    result_sub = sub(n1, n2);
    printf("Sum = %.1f + (%.1fi)\n ", result_sum.real, result_sum.imag);
    return 0;
    printf("Difference = %.1f + (%.1fi)\n ", result_sub.real, result_sub.imag);
    return 0;
}

