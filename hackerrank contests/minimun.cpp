#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s="min(int, ";
	for(int i=1;i<=n-1;i++)
	{
		cout<<s;
	}
	cout<<"int";
	for(int i=1;i<=n-1;i++)
	{
		cout<<")";
	}
	cout<<endl;
}