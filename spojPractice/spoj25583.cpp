#include <iostream>
using namespace std;
int main()
{
	long long int a,b;
	cin>>a>>b;
	if(a%2==0)
		a=a+1;
	if(b%2==0)
		b=b-1;
	long long int diff=b-a;
	long long int n=diff/2;
	long long int ans=(n+1)*(n+a);
	cout<<ans<<endl;
}