#include <stdio.h>
int main() {
   register int x;//store the variables in CPU register
   register int a = 5;
   printf("The value of register variable x : %d\n",x);//defualt value of register variabls is garbage value
   printf("The value of register variable : %d",a);
   return 0;
}
