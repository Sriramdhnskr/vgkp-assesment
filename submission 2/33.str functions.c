#include<stdio.h>
#include<string.h>
int mystrlen(char *str)
{
    int z=strlen(str);
        return z;
}
void mystrcpy(char *str2,char *str)
{
    strcpy(str2,str);
}
void mystrcmp(char *str,char *str1)
{
    if(strcmp(str,str1)==0)
  {
      printf("Strings are equal\n");
  }
  else{
    printf("Strings are not equal\n");
  }
}
void mystrcat(char *str1,char *str)
{
    strcat(str1,str);
}
int main() {
  char str[20],str1[20],str2[20];
  scanf("%s%s",str,str1);
  int n=mystrlen(str);
  printf("%d\n",n);
  mystrcpy(str2,str);
  printf("copied string:%s\n",str2);
  mystrcmp(str,str1);
  mystrcat(str,str1);
  printf("concatenated string:%s\n",str);
  return 0;
}
