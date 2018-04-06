#include <iostream>

using namespace std;
  class Printindexofelement
  {
    
    private:
    int i,a[100],c;
    public:
    void display()
    {
        cout<<"Enter your number";
        cin>>c;
        for(i=0;i<c;i++)
        {
            cin>>a[i];
        }
        cout<<"The number is :"<<endl;
        for(i=0;i<c;i++)
        {
            cout<<a[i]<<"\t"<<i<<endl;
        }
    }
  };
 

int main()
{
    Printindexofelement p;
    p.display();
    return 0;
}
