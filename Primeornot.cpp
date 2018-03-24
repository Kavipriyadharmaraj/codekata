#include <iostream>

using namespace std;
class Primeornot
{
    private:
    int n,i,count;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>n;
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No";
        }
    }
       
};

int main()
{
  Primeornot p;
  p.get();
  
}
