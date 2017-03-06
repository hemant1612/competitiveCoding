#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<=2)
		cout<<"NO"<<endl;
	else if(n%2!=0)
		cout<<"NO\n";
	else
		cout<<"YES\n";
}