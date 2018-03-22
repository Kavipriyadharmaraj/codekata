#include <iostream>

using namespace std;
int main()
{
  char a;
  cout<<"Enter the input";
  cin>>a;
  if( a=='a'|| a=='e'|| a=='i'|| a== 'o'|| a=='u'||
  a == 'A'||a== 'E'||a =='I'||a == 'O'||a =='U')
  {
      cout<<"Vowel";
  }
  else if((a >= 'a'&& a<='z') || (a>='A'&& a<='Z'))
  {
      cout<<"Consonant";
  }
  else
  {
      cout<<"Enter only alphabet letters";
  }
}
  
