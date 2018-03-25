#include <iostream>

using namespace std;
class Amstrongnum
{
    private:
    int i,a,n,sum=0,r;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>i;
        n=i;
 while(i!=0)
 {
     r=i%10;
     a=r*r*r;
     sum=sum+a;
     i=i/10;
     
 }
 if(n==sum)
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
 Amstrongnum a;
 a.get();
 }
