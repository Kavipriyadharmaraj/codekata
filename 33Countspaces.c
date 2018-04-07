#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char x[1000];
int i,n,count=0;
clrscr();
printf("Enter the string\n");
gets(x);
n=strlen(x);
for(i=0;i<n;i++)
{
if(x[i]==' ')
{
count++;
}
}
printf("The result is:\t%d",count);
getch();
}
