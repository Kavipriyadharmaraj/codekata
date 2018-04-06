#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,n,temp,a[100];
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(x=0;x<n;x++)
{
scanf("%d",&a[x]);
}
for(x=0;x<n;x++)
{
for(y=x+1;y<n;y++)
{
if(a[x]>a[y])
{
temp=a[x];
a[x]=a[x];
a[y]=temp;
}
}
}
if(n%2==0)
{
int c=a[n/2]+a[n/2+1];
printf("%d",c/2);
}
else
{
int d=a[n/2];
printf("%d",d);
}
getch();
}
