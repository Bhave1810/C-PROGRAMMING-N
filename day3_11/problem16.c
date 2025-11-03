// 15)What will be the output of the below code?
#include<stdio.h>
int main()
{
int a = 3, b = 5, c = 7;
printf("%d\n", (a > b ? a : b) > c ? (a > b ? a : b) : c);
return 0;
}
output:
7 