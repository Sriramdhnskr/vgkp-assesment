#include <stdio.h>
extern int x = 32;
int b = 8;
int main() {
   extern int b;
   printf("The value of extern variables x and b : %d,%d\n",x,b);//access global variables
   x = 1;
   printf("The value of changed extern variable x : %d\n",x);//local scope accesses first
   return 0;
}
