// Write your code here. Read the input from standard input as the per the specified input format
#include<stdio.h>
#include<string.h>
int main()
{
   char s[100];
   scanf("%s",s);
   int n;
   scanf("%d",&n);
   int num,i=0,c=0,j=0,f=0;
   char res[100];
   while(s[i]!='\0')
   {
      if(s[i]>='0' && s[i]<='9')
      {
        c++;
        num=0;
        while(s[i]>='0' && s[i]<='9')
        {
            num=num*10+((int)s[i]-48);
            i++;
        }
        if(num%n==0)
        {
            f=1;
            res[j]=(char)(c+48);
            j++;
            res[j]=',';
            j++;
        }
      }
      i++;
   }
   if(f==0)
   {
      printf("-1");
   }
   else
   {
       res[j]='\0';
       for(i=0;i<strlen(res)-1;i++)
       {
           printf("%c",res[i]);
       }
   }
}
         
        
