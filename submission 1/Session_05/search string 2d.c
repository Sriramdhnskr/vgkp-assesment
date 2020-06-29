#include<stdio.h>

#include<string.h>

 int i,j,cols,k=-1;

 char a[50],b[50][50],t=0,search[50];

void searchword(char b[50][50],char search[50],int i1,int j1 )
{

 int i=0,j=j1,end1,end2,found=0;

  for(i=0;i<strlen(search);i++)

  {

     if(b[i1][j1]==search[i]){
        end1=i1;end2=j1;++j1;++found;

     }

     else {

     break;}

  }

     if(found==strlen(search))

     {    printf("start index : <%d,%d>\n",i1+1,j+1);

          printf("end index   : <%d,%d>\n",end1+1,end2+1);found=0;

           } j1=j;j=i1;found=0;

  for(i=0;i<strlen(search);i++)

  {

    if(b[i1][j1]==search[i]){

     end1=i1;end2=j1;++i1;++found;}

    else {break;  }

  }

  if(found==strlen(search))

   { printf("start index : <%d,%d>\n",j+1,j1+1);

     printf("end index   : <%d,%d>\n",end1+1,end2+1);found=0;}

}

int main()

{
 scanf("%s",a);
 scanf("%d",&cols);
 scanf("%s",search);
  for(i=0;i<=strlen(a)/cols;i++)
  {

    for(j=0;j<cols;j++)

    {

        b[i][j]=a[++k];printf("%c ",b[i][j]);

    }

printf("\n");

  }

 k=0;

 for(i=0;i<=strlen(a)/cols;i++)

 {

     for(j=0;j<cols;j++)

     {

         if(b[i][j]==search[0])

         {

             searchword(b,search,i,j);
         }

     }

 }

 return 0;

 }
