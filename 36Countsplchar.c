#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char x[1000];
int i,n,c,count=0,d;
clrscr();
printf("Enter the string\n");
gets(x);
n=strlen(x);
for(i=0;i<n;i++)
{
if((x[i]>='0'&&x[i]<='9')||(x[i]>='x'&&x[i]<='z')||(x[i]>='A'&&x[i]<='Z'))
{
count++;
}
}
d=n-count;
printf("The result is:\t%d",d);
getch();
}
