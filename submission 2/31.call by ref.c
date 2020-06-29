#include<stdio.h>
void swap(int*,int*);
int main() {
  int a,b;
  printf("Enter values:");
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  printf("after swapping: a=%d,b=%d\n",a,b);
  return 0;
}
void swap(int *x,int *y) {
  int t=*x;
  *x=*y;
  *y=t;
}
