#include <stdio.h>

int big_endian(int num)
{
 int byte0, byte1, byte2, byte3;
 byte0 = (num & 0x000000FF) >> 0 ;
 byte1 = (num & 0x0000FF00) >> 8 ;
 byte2 = (num & 0x00FF0000) >> 16 ;
 byte3 = (num & 0xFF000000) >> 24 ;
 return((byte0 << 24) | (byte1 << 16) | (byte2 << 8) | (byte3 << 0));
}

int main()
{
 int number;
 scanf("%d",&number);
 int c;
 c=big_endian(number);
 printf("New number is %d", c);
 return 0;
}
