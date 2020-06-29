#include<stdio.h>
struct Trainee {
int empid;
char name[20];
int age;
double scores[5];
};
int main()
{
struct Trainee tarr[10];
int n;
double total=0;
printf("Enter no.of employees:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("enter empid:");
    scanf("%d",&tarr[i].empid);
    printf("enter employee name:");
    scanf("%s",tarr[i].name);
    printf("enter employee age:");
    scanf("%d",&tarr[i].age);
      printf("enter scores:");
      for(int j=0;j<5;j++)
      {
    scanf("%lf",&tarr[i].scores[j]);
      }
}
for(int i=0;i<n;i++)
{
    printf("entered empid:%d\n",tarr[i].empid);
    printf("enter employee name:%s\n",tarr[i].name);
    printf("enter employee age:%d\n",tarr[i].age);
    printf("enter scores:\n");
    for(int j=0;j<5;j++)
      {
    printf("%.2f",tarr[i].scores[j]);
    total+=tarr[i].scores[j];
      }
      printf("total :%.2f\n",total);
     printf("Average :%.2f\n",total/5.0);
}
return 0;
}
