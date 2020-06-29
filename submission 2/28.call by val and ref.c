#include<stdio.h>
void swapval(int,int);// call by val function
void swapref(int*,int*);// call by reference function
int main() {
  int a,b;
  printf("Enter values:");
  scanf("%d%d",&a,&b);
  swapval(a,b);
  printf("swapped values call by val: a=%d,b=%d\n",a,b);
  swapref(&a,&b);
  printf("swapped values call by reference: a=%d,b=%d\n",a,b);
  return 0;
}
void swapval(int x,int y) {
  int t=x;
  x=y;
  y=t;
}
void swapref(int *p1,int *p2) {
  int t=*p1;
  *p1=*p2;
  *p2=t;
}
