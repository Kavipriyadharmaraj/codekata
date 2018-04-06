#include<stdio.h>
#include<conio.h>
int main()
{
int m,h,n;
clrscr();
printf("Enter the minutes");
scanf("%d",&m);
h=m/60;
n=m%60;
printf("Hour:Minute=%d:%d",h,n);
getch();
}
