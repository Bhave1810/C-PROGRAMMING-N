// 6)What will be the output of the below code?
#include<stdio.h>
int main()
{
 int a = 10, b = 10, c = 10;
    int x, y;

    x = ++a * 2 - 1;
    y = b++ * 2 - 1;
    c *= 2 - 1;

    printf("%d %d %d\n", x, y, c);

}
// output:21 19 10
// preincrement have first priority than the * 
// * have first priority than postincrement 