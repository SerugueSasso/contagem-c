#include <stdio.h>

int main()
{
  int x,a;
  scanf("%d",&x);
  a=x+10;
  while (x<a){
    printf("%d\n",x);
    x=x+1;
  }
  return 0;
}
