#include <iostream>
using namespace std;
class Subtracttime
{
    private:
    int h,h1,h2,m,m1,m2;
    public:
    void display()
    {
        cout<<"Enter the hour and miniute"<<endl;
        cin>>h1>>m1;
        cin>>h2>>m2;
        h=h1-h2;
        m=m1-m2;
        cout<<"The time is: "<<h<<"\t"<<m;
    }
};

int main()
{
   Subtracttime s;
    s.display();

    return 0;
}
