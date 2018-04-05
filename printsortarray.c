#include<stdio.h>
#include<conio.h>
int main()
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
printf("The sorted array is\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}
