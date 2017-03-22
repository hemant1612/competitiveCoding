#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalin(long long int n)
{
	string s=to_string(n);
	string s1=s;
	reverse(s.begin(),s.end());
	if(s==s1)
		return true;
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
		n++;
		long long int f=1;
		while(f==1)
		{
			bool ans=isPalin(n);
			if(ans==true)
			{
				cout<<n<<endl;
				f=0;
				break;
			}
			else
			{
				n++;
			}
		}
	}
}