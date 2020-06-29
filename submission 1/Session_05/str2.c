#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100],r[100],t,sstr[100];
    int pos,l,c=0;
    scanf("%s %s %c",s,r,&t);
    printf("Input the position to start extraction :");
   scanf("%d", &pos);

   printf("Input the length of substring :");
   scanf("%d", &l);
    char *rev,*ret;;
    ret=strstr(s,r);
    if(ret)
  {
    printf("string found\n" );
    printf ("First occurrence of string \"test\" in \"%s\" is"\
           " \"%s\"",s, ret);
  }
  else
  {printf("\nstring not found\n" );
  }
  rev=strrev(s);
  printf("\nReversed string: %s",rev);
  if(strchr(s,t)!=NULL)
  {
      printf("\ncharacter is found in the string\n" );
  }
  else
  {
      printf("\ncharacter is not found in the string\n" );

  }
  for(int i = 0;s[i]!='\0';i++)
    {
        if(isalpha(s[i]))
        {
            if (islower(s[i]))
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }
    printf("String after toggling each characters : %s",s);
   while (c < l)
   {
      sstr[c] = s[pos+c-1];
      c++;
   }
   sstr[c] = '\0';

   printf("The substring retrieve from the string is :%s\n",sstr);
}

