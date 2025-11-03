// 13)What will be the output of the below code?
#include<stdio.h>
int main()
{
int a = 5, b = 10;
printf("%d\n", a > 3 ? b++ : ++a);
printf("%d %d\n", a, b);
return 0;
}
output:10
        5 11