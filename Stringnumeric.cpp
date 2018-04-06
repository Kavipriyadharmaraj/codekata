#include <iostream>

using namespace std;
 class Stringnumeric 
 {
     private:
     char i;
     public:
     void get()
     {
         cout<<"Enter the input:"<<endl;
         cin>>i;
         if(i>='0'&&i<='9')
         {
             cout<<"Yes,It is numeric"<<endl;
         }
         else
         {
             cout<<"No,It is not numberic"<<endl;
         }
    
     }
     
 };

int main()
{
   Stringnumeric  s;
   s.get();
       return 0;
}
