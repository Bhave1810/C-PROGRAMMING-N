
// 19) What will be the output for the following C code?
#include<stdio.h>
int main()
{
  int a=3, b=9;
  printf("%d", ++(a*b+1));
  return 0;
}
// Output:error: lvalue required as increment operand
