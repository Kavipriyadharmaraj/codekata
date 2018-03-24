#include <iostream>

using namespace std;
class Evennum
{
    private:
    int a,b,i;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>a>>b;
        for(i=a;i<=b;i++)
        { 
           
            if(a%2==0)
            {
                cout<<a<<"\t";;
            }
             a=a+1;
        }
    }

};

int main()
{
 Evennum e;
 e.get();
  
}
