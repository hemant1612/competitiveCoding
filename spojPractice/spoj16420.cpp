#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2==1)
			cout<<n<<endl;
		else
		{
			string s="";
			while(n>1)
			{
				s=to_string(n%2)+s;
				n/=2;
			}
			s="1"+s;
			//cout<<s<<endl;
			//reverse(s.begin(),s.end());
			//cout<<s<<endl;
			int ans=0;
			for(int i=0;i<s.length();i++)
			{
				if(s.at(i)=='1')
					ans+=pow(2,i);
			}
			cout<<ans<<endl;
		}

	}
}
