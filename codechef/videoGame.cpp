#include <iostream>
using namespace std;
int main()
{
	int n,h;
	cin>>n>>h;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int f=1;
	int j=0;
	int load=0;
	while(f==1)
	{
		int x;
		cin>>x;
		if(x==1)//left
		{
			if(j>0)
			{
				j--;
				//cout<<"j "<<j<<endl;
			}
		}
		else if(x==2)//right
		{
			if(j<n-1)
				j++;
			//cout<<"j "<<j<<endl;
		}
		else if(x==3)
		{
			if(load==0)
			{
				if(a[j]>0)
				{
					load=1;
					a[j]--;
				}
			}
			//cout<<"load "<<load<<endl;
			//cout<<"aj "<<a[j]<<endl;
		}
		else if(x==4)
		{
			if(load==1)
			{
				if(a[j]+1<=h)
				{
					a[j]++;
					load=0;
				}
			}
			//cout<<"load "<<load<<endl;
			//cout<<"aj "<<a[j]<<endl;
		}
		else
			break;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}