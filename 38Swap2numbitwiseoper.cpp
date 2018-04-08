#include <iostream>

using namespace std;
class Swap
{
  
  private:
  int x,y;
  public:
  void display()
  {
  cout<<"Enter the number"<<endl;
  cin>>x>>y;
  x=x^y;
  y=x^y;
  x=x^y;
  cout<<"After swapping"<<endl;
  cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
  }
  
};

int main()
{
    Swap s;
    s.display();
}
