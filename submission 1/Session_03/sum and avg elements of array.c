#include<stdio.h>
#include<stdlib.h>
 int main()
 {
          int a[100],n,max,min;
          float sum=0,avg,percent;
          printf("Enter no. of subjects");
          scanf("%d",&n);
          for(int i=0;i<n;i++)
          {
          scanf("%d",&a[i]);
          sum+=a[i];
          }
          avg=sum/n;
          printf("\nTotal Marks = %f ",sum);
          printf("\nAverage Marks = %.2f",avg);
          max=a[0];
          min=a[0];
          for(int i=0;i<n;i++)
          {
              if(a[i]>max)
              {
                  max=a[i];
              }
            if(a[i]<min)
            {

                min=a[i];
            }
          }
          printf("maximum mark=%d",max);
          printf("minimum mark=%d",min);
          return 0;
 }
