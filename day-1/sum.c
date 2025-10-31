#include <stdio.h>
int main(void) {
    double num1, num2, sum;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        fprintf(stderr, "Invalid input. Please enter two numbers.\n");
        return 1;
    }
    sum = num1 + num2;
    printf("Sum = %g\n", sum);
    return 0;
}/* Simple program to read two numbers and print their sum */