
// 4) What will be the output of this below program?

#include<stdio.h>
int main() {
int a = 10;
int b = 15;
int c = a++ + b--;
printf("a = %d, b = %d, c = %d\n", a, b, c);
return 0;
}
// output:a = 11, b = 14, c = 25
