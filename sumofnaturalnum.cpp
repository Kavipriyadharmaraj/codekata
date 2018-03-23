#include <iostream>

using namespace std;
class Sumnum
{
    private :
    int i,n,sum=0;
    public :
    void display()
    {
      cout<<"enter your number"<<endl;
     cin>>n;
     for(i=1;i<=n;i++) 
       {
          sum=sum+i; 
        
       }
      cout<<sum<<endl;
    }
};

int main()
{
  Sumnum s;
  s.display();
}
