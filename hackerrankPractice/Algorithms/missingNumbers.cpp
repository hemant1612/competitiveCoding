#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int a[1000010];
	int minA=100000;
	int maxA=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[x]++;
		if(x<minA)
			minA=x;
		if(x>maxA)
			maxA=x;
	}
	cin>>m;
	int minB=100000;
	int maxB=0;
	int b[1000010];
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		b[x]++;
		if(x<minB)
			minB=x;
		if(x>maxB)
			maxB=x;
	}
	int minF=min(minA,minB);
	int maxF=max(maxA,maxB);
	for(int i=minF;i<=maxF;i++)
	{
		if(b[i]>0)
		{
			if(a[i]<b[i])
				cout<<i<<" ";
		}
	}
	cout<<endl;
}