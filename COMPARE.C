#include<stdio.h>
#include<conio.h>
int compare(char*, char*);
void main()
{
 int f;
 char s1[50];
 char s2[50];
 clrscr();
 printf("Enter 1st String= ",s1);
 gets(s1);
 printf("Enter 2nd String= ",s2);
 gets(s2);
 f=compare(s1,s2);
 if(f==1)
	printf("Not Equal");
 else
	printf("Equal");
 getch();
}

int compare(char *n1, char *n2)
{
 int i,f=0;

 for(i=0; n1[i]!='\0'||n2[i]!='\0'; i++)
 {
  if(n1[i]!=n2[i])
  {
	f=1;
	break;
  }
  }
   return f;
}