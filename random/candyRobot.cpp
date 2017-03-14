#include <iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	int c[t];
	int total=n;
	for(int i=0;i<t;i++)
	{
		cin>>c[i];
		
	}
	for(int i=0;i<t;i++)
		cout<<c[i]<<" ";
	cout<<endl;
	cout<<"total "<<total<<endl;
	int ans=0;
	for(int i=0;i<t;i++)
	{
		total-=c[i];
		cout<<"total "<<total<<endl;
		if(total<5&&i!=t-1)
		{
			
			ans+=n-total;
			cout<<"ans "<<ans<<endl;
			total=n;
		}
	}
	cout<<ans<<endl;
}