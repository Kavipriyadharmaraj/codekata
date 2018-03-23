#include <iostream>

using namespace std;
int main()
{
  int k;
  cout<<"Enter the input";
  cin>>k;
  if(k>=1000)
  {
  if(k%4==0)                                     
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
