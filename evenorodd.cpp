#include <iostream>

using namespace std;
int main()
{
  int k;
  cout<<"Enter your number";
  cin>>k;
  if(k>=1&&k<=100000)
  {
  if(k%2==0)
  {
      cout<<"It is Even";
}
else
{
    cout<<"It is odd";
}
}
else
{
    cout<<"It is greater than 100000 Or It is less than zero";
}


    return 0;
}
