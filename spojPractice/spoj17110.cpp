#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int max=0;
		int index=-1;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x>>a[i];
			if(x>max)
			{
				max=x;
				index=i;
			}
		}
		//cout<<max<<endl;
		int f=0;
		for(int i=0;i<n;i++)
		{
			if(index!=i && a[i]>=max)
			{
				cout<<"-1"<<endl;
				f=1;
				break;
			}
		}
		if(f==0)
			cout<<index+1<<endl;
	}
}