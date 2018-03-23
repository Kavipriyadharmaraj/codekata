#include <iostream>

using namespace std;
int main()
{
  int a;
  cout<<"Enter the input";
  cin>>a;
  if(a>=1000)
  {
  if(a%4==0)                                     
  {
cout<<"It is leap year";
}
else
{
    cout<<"It is not leap year";
}
}
else
{
    cout<<"Enter the input greater than 1000 only";
}
}
