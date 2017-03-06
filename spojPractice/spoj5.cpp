#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalin(long long int n)
{
	string s=to_string(n);
	string s1=s;
	reverse(s1.begin(),s1.end());
	//cout<<s<<" "<<s1<<endl;
	if(s==s1)
		return true;
	else
		return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int f=0;
		n++;
		while(f==0)
		{
			bool check=isPalin(n);
			if(check)
			{
				f=1;
				cout<<n<<endl;
				break;
			}
			n++;
		}
	}
}