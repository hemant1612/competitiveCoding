#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int *m;
	m=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	if(m[k-1]>0)
	{
		int count=0;
		for(int i=k;i<n;i++)
		{
			if(m[i]==m[k])
				count++;
		}
		cout<<k+count<<endl;
	}
	else
		cout<<"0"<<endl;

}