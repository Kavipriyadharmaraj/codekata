#include <iostream>

using namespace std;
class Amstrong
{
private:
  int i, a, b, sum, j, re, n;
public:
  void get ()
  {
    cout << "enter your number";
    cin >> a;
    cin >> b;
    for (i = a; i <= b; i++)
      {
	sum = 0;
	n = i;
	while (n != 0)
	  {
	    re = n % 10;
	    sum = sum + re * re * re;
	    n = n / 10;
	  }
	if (i == sum)
	  {
	    cout <<"The Amstrong number between two numbers is:"<< i<<"\t"<<endl;
	  }
      }
  }

};

int
main ()
{
 Amstrong a;
a.get();
  return 0;
}
