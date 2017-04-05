#include <iostream>
#include <string>
using namespace std;
string multiply(string n,string m)
{
	if(n.length()<=1||m.length()<=1)
		return to_string(atoi(n.c_str())*atoi(m.c_str()));
	long long int m1=max(n.length(),m.length());
	long long int half=m1/2;
	string high1=n.substr(0,half);
	string low1=n.substr(0+half,n.length()-half);
	string high2=m.substr(0,half);
	string low2=m.substr(0+half,m.length()-half);
	/*cout<<high1<<endl;
	cout<<low1<<endl;
	cout<<high2<<endl;
	cout<<low2<<endl;*/
	string z0=
}
int main()
{
	string n,m;
	getline(cin,n);
	getline(cin,m);
	cout<<n<<endl;
	cout<<m<<endl;
	string ans=multiply(n,m);
}