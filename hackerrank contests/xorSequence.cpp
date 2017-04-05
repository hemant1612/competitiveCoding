#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int l,r;
		cin>>l>>r;
		long long int m=l%4;
		long long int ans=0;
		int check=(r-l)/4;
		for(int i=1;i<=3-m;i++)
		{
			if(l%4==0)
				ans^=l;
			else if(l%4==1)
				ans^=1;
			else if(l%4==2)
				ans^=l+1;
			l++;
		}
		m=r%4;
		if(check%2==0)
			ans^=2;
		if(m!=3)
		{
			for(int i=1;i<=m+1;i++)
			{
				if(r%4==0)
					ans^=r;
				else if(r%4==1)
					ans^=1;
				else if(r%4==2)
					ans^=r+1;
				r--;
			}
		}
		cout<<ans<<endl;
	}
}