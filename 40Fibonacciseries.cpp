#include <iostream>

using namespace std;
class Fibonacciseries
{
    private:
    int f1=-1,f2=1,f3,i,n;
    public:
    void display()
    {
        cout<<"Enter the number"<<endl;
        cin>>n;
        for(i=0;i<n;i++)
        {
            f3=f1+f2;
            cout<<f3<<"\t";
            f1=f2;
            f2=f3;
        }
       
    }
};
int main()
{
   Fibonacciseries f;
    f.display();
}
