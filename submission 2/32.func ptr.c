#include<stdio.h>
int swap(int*,int*);
int main() {
  int a,b;
  scanf("%d%d",&a,&b);
  int (*fp) (int*,int*);
  fp=swap;
  fp(&a,&b);
  printf("after swapping: %d,%d",a,b);
  return 0;

}
int swap(int *x,int *y) {
  int t=*x;
  *x=*y;
  *y=t;
  return 0;
}
