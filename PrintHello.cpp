#include <iostream>

using namespace std;
class Printhello
{
    private :
    int i,n;
    public :
    void print()
    {
      cout<<"enter your number"<<endl;
     cin>>n;
     if(n>0)
     {
       for(i=0;i<n;i++) 
       {
           cout<<"hello"<<endl;
       }
     }
     else
     {
         cout<<"Enter the input greater than zero";
     }
    }
};

int main()
{
  Printhello p;
  p.print();
}
