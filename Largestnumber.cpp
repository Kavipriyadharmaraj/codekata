#include <iostream>

using namespace std;
int main()
{
  int x,y,z;
  cout<<"Enter the input";
  cin>>x;
  cin>>y;
  cin>>z;
  if(x>y&&x>z)
  {
      cout<<"x is biggest number"<<endl;
      cout<<"X="<<x;
  }
  else if(y>z)
  {
      cout<<" y is biggest number"<<endl;
      cout<<"Y="<<y;
  }
  else
  {
      cout<<"z is biggest number"<<endl;
      cout<<"Z="<<z<<endl;
  }
}
