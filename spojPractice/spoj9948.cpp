#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	if(n!=1)
	{
		while(n%2==0)
			n=n/2;
		if(n==1)
			cout<<"TAK\n";
		else
			cout<<"NIE\n";
	}
	else
	{
		cout<<"NIE\n";
	}
}