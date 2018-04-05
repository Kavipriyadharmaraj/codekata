#include <iostream>

using namespace std;
 class Printminielement
 {
 private:
 int i,a,b[100],small;
 public:
 void get()
 {
     cout<<"Enter the number";
     cin>>a;
     for(i=0;i<a;i++)
     {
         cin>>b[i];
     }
     small=b[0];
     for(i=0;i<a;i++)
     {
         if(small>b[i])
         {
             small=b[i];
         }
     }
     cout<<"The minimum number"<<small<<endl;
 }
 };
 

int main()
{
    Printminielement p;
    p.get();
    return 0;
}
