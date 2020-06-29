#include<stdio.h>
int main()
{
    char string[100]={0};
    int elapse=0;
    int ret=0,date=0,month=0,year=0;
    printf("\nEnter the date format:");
    fgets(string,100,stdin);
    sscanf(string , "%d/%d/%d" ,&date,&month,&year);
    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);
}
