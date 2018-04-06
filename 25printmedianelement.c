#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,temp,a[100];
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
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
