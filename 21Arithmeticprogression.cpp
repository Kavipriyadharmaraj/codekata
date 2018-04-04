#include <iostream>
#include <string>
using namespace std;
class Arithmeticprogression{
    public:
    int n,a,d,s,N,D,A,S;
    int calc()
    {
N=n-1;
	D=N*d;
	A=2*a;
	S=A+D;
	s=S*n/2;
	cout<<s;
return 0;    
    }
};
int main()
{
Arithmeticprogression s;
cin>>s.n;
cin>>s.a;
cin>>s.d;
s.calc();
return 0;
}
