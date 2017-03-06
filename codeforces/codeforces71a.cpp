#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{	
		cin>>s;
		if(s.length()<=10)
			cout<<s<<endl;
		else
		{
			string ans=s.at(0)+to_string(s.length()-2)+s.at(s.length()-1);
			cout<<ans<<endl;
		}
	}
}