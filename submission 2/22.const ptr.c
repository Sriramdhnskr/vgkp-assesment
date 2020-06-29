#include<stdio.h>

int main(void)
{
    int v1 = 2, v2 = 3;
    int *const ptr1 = &v1;//const pointer
    const int* ptr2 = &v1;//pointer to const
    const int* const ptr3 = &v1;//const ptr pointing to const
    int const* ptr4 = &v1; //pointer to const
    //ptr1 = &v2;
    printf("%d\n", *ptr1);
    //*ptr2 = 1;//not work
    ptr2 = &v2;//work
    printf("%d\n", *ptr2);
 //*ptr3 = 1; //not work
  v1 = 100;//work
 //ptr3 = &v2; //not work
 printf("%d\n", *ptr3);
 ptr4 = &v2;//work
// *ptr4 = 12;//not work
 printf("%d\n", *ptr4);
    return 0;
}
