
// 18) Consider the following program fragment,and choose the correct one.

#include <stdio.h>
int main()
{
  int a,b=2,c;
  a=2*(b++);
  c=2*(++b);
  printf("a=%d, b=%d, c=%d",a,b,c);
  return 0;
}

output: a=4, b=4, c=8