#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long long int sum=0;
		for(int i=0;i<s.length();i++)
			sum+=(int)(s.at(i))-48;
		cout<<sum<<endl;
	}
}