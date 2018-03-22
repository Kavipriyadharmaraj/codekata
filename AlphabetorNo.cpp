#include <iostream>

using namespace std;

int main()
{
  char a;
  cout<<"Enter the input";
  cin>>a;
  if((a >= 'a'&& a<='z') || (a>='A'&& a<='Z'))
  {
      cout<<"Alphabet";
  }
  else if (a>='0'&&a<='9')
  {
      cout<<"It is number";
  }
  else
  {
      cout<<" It is special character";
  }
}
