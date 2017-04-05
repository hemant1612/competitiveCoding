#include <iostream>
#include <string>
#include <vector>
using namespace std;

int count(int n,int counter,int a[])
{
	string s=to_string(n);
	for(int i=0;i<n;i++)
	{
		int d=s.at(i)-'0';
		if(a[d]!=1)
		{
			counter++;
			a[d]=1;
		}
	}
	return counter;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[10];
		for(int i=0;i<10;i++)
		{
			a[i]=0;
		}
		int ans=1;
		int counter=0;
		int n;
		cin>>n;
		counter=count(n,counter,a);
		if(counter<10)
		{
			for(int i=2;i<=1000;i++)
			{
				counter=count(n*i,counter,a);
				if(counter>=10)
				{
					break;
				}
				else
					ans++;
			}
		}
		cout<<ans<<endl;
	}
}