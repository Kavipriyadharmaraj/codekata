#include <iostream>

using namespace std;

int main() 
{
int x,y,z;
cout<<"Enter the number";
cin>>x>>y;
if(x<10000&&y<10000)
{
z=x;
x=y;
y=z;
cout<<"after swapping:";
cout<<"x="<<x<<"\t"<<"y="<<y;
}
else
{
    cout<<"Enter the input only lassthan 10000";
}
}
