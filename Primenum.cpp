#include <iostream>

using namespace std;
class Primenum
{
    private:
    int i,a,b,count=0,j;
    public:
    void get()
    {
        cout<<"enter your number";
        cin>>a;
        cin>>b;
        for(i=a;i<=b;i++)
        {
            count=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    count++;
                    break;
                    
                }
            }
            if(count==0&&i!=1)
            
                cout<<""<<i<<"\t";
            
        }
    
    }
};

int main()
{
    Primenum p;
    p.get();

    return 0;
}
