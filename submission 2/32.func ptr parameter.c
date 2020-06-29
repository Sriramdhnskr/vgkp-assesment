#include<stdio.h>
int pro(int,int);
void compute(int,int, int(*)(int,int) );
int main() {
  int a,b;
  scanf("%d%d",&a,&b);
  compute(a,b,pro);
  return 0;
}

void compute(int x, int y, int (*fc)(int,int) ) {
  int c;
  c=fc(x,y);
  printf("%d",c);
}
int pro(int x,int y) {
  return x*y;
}
