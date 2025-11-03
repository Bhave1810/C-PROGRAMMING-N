// 5)What will be the output of the below code?
#include<stdio.h>
int main()
{
  int a = 7, b = 5, c = 2;
    int result = a * (b + c++) / (--b);
    printf("%d\n", result);

}
// output:12
// note:() have first prerence than other here prosincrement performt after the () opretion