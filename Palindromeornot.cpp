#include <iostream>

using namespace std;
class Palindromeornot
{
    private:
    int temp,n,re,rev=0,a ;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>n;
        a=n;
        while(n!=0)
        {
            re=n%10;
            rev=rev*10+re;
            n=n/10;
        }
        
        if(a==rev)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
        
};

int main()
{
  Palindromeornot p;
  p.get();
  
}
