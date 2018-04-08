#include <iostream>

using namespace std;
class Maxamoung10num
{
    private:
   int i,a[10],big;
    
    public:
    void get()
    {
        cout<<"Enter the number:"<<endl;
        big=a[0];
        for(i=0;i<10;i++)
        {
            cin>>a[i];
            if(big<a[i])
            {
                big=a[i];
            }
        }
        cout<<big;
    }
};

int main()
{
  
    Maxamoung10num m;
    m.get();
}
