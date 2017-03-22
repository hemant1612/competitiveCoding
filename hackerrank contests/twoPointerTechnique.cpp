#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m; //sizes of the two arrays
	int a[n],b[m];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; //input of a[i]'s
	}
	for(int i=0;i<m;i++)
		cin>>b[i]; //input of b[i]'s
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=m-1;
	int x;
	cin>>x; //input of a[i]+b[j]=X
	int f=0;
	while(i<n)
	{
		while(a[i]+b[j]>x)
			j--;
		if(a[i]+b[j]==x)
		{
			f=1;
			cout<<"hot"<<endl;
		}
		i++;
	}
	if(f==0)
		cout<<"not"<<endl;
}