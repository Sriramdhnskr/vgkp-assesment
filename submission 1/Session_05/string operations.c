#include<stdio.h>

int len(char *p)
{
    int c=0;
    while(*p!='\0')
    {
        c++;
        p++;
    }
    return c;
}
void copied(char *des,char *src)
{
    while(*src!='\0')
    {
        *des++=*src++;
    }
    *des='\0';
}
void scat(char *s1,char *s2)
{
  while(*s1 != '\0')
{
s1++;
}
while(*s2 != '\0')
{
*s1=*s2;
s1++;
s2++;
}
*s1 = '\0';
}
void scmp(char *s1,char *s2)
{
    while(*s1==*s2)
    {
        if(*s1=='\0' || *s2=='\0')
        {
            break;
        }
        s1++;
        s2++;
    }
    if(*s1=='\0'&& *s2=='\0')
        printf("strings are equal\n");
    else
        printf("Not equal\n");

}
int main()
{
    char s[100],s1[100],s2[100],s3[100];
    int length;
    scanf("%s%s%s",s,s2,s3);
    length=len(s);
    printf("%d\n",length);//string length
    copied(s1,s);
    printf("%s\n",s1);// copies string
    scat(s1,s2);
    printf("%s\n",s2);//concatenation
    scmp(s,s3);//string compare
    return 0;
}
