#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter values of x & y ");
    scanf("%d%d",&x,&y);
    x = x^y;
    y = x^y;
    x = x^y;
  printf("Swapped values:x= %d,y= %d", x, y);
  return 0;
}
