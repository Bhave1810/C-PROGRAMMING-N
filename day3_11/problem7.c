// 7)what will be the output of the below code?
#include<stdio.h>
int main()
{
int i = 0, j = 1, k = 2, m;
  m = i++ || j++ || k++;
  printf("%d %d %d %d", m, i, j, k);

return 0;

}
// output:1 1 2 2
// note:one or operation find 1 in any operation then it not check further one operation
// so here not check the k value or not done postincrement operation