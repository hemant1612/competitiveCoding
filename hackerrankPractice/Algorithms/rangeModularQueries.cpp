#include <iostream>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	while(q--)
	{
		int left,right,x,y;
		cin>>left>>right>>x>>y;
		int counter=0;
		for(int i=left;i<=right;i++)
		{
			if(a[i]%x==y)
				counter++;
		}
		cout<<counter<<endl;
	}
}