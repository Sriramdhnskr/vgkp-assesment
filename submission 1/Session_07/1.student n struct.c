#include<stdio.h>
#include<stdlib.h>
struct student
{
  int roll_no,total_score,age;
  char name[30];
};
int main()
{
  int i,n;
  float avg;
  printf("Enter number of students:");
  scanf("%d",&n);
  struct student *stud[n];
  for(i=0;i<n;i++)
    {
      stud[i] = (struct student *) malloc(sizeof(struct student));
      printf("Student %d\n",i+1);
      printf("Enter roll no. :\n");
      scanf("%d",&stud[i]->roll_no);
      printf("Enter name :\n");
      scanf("%s",stud[i]->name);
      printf("Enter Age :\n");
      scanf("%d",&stud[i]->age);
      printf("Enter total score :\n");
      scanf("%d",&stud[i]->total_score);
    }
  for(i=0;i<n;i++)
    {
      printf("Student %d\n",i+1);
      printf("Roll no. : %d\n", stud[i]->roll_no);
      printf("Name : %s\n", stud[i]->name);
      printf("Age : %d\n", stud[i]->age);
      printf("Total score : %d\n", stud[i]->total_score);
      printf("Average : %.2f\n",stud[i]->total_score/5.0);
    }
  return 0;
}
