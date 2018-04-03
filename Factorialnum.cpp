#include <iostream>

using namespace std;
class Factorialnum
{
    private:
    int n,i,f=1;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        cout<<"The output is :"<<f;
        
    }
};

int main()
{
 Factorialnum s;
 s.get();

 }
