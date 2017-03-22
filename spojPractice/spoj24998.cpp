#include <iostream>
using namespace std;
int binary(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n&1;
		n=n>>1;
	}
	//cout<<sum<<" sum"<<endl;
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		n--;
		int f=1;
		if(k==0)
			cout<<"-1"<<endl;
		else if(k==1)
			cout<<"1"<<endl;
		else
		{
			while(f==1)
			{
				int ans=binary(n);
				if(ans<=k)
				{
					f=0;
					cout<<n<<endl;
					break;
				}
				n-=2;
				if(n==-1)
				{
					cout<<"-1"<<endl;
					f=0;
					break;
				}
			}
		}
	}
}