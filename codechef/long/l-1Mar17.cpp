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
		int *a1;
		a1=new int[n];
		int *a2;
		a2=new int[n];
		for(int i=0;i<n;i++)
			cin>>a1[i];
		int ans1=0,ans2=0;
		for(int i=0;i<n;i++)
		{
			cin>>a2[i];
			if(i%2==0)
			{
				ans1=ans1+a1[i];
				ans2=ans2+a2[i];
			}
			else
			{
				ans1=ans1+a2[i];
				ans2+=a1[i];
			}
		}
		cout<<min(ans1,ans2)<<endl;
	}
	return 0;
}