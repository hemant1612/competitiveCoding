#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int i=0,j=0;
	int counter=0;
	while(i<sizeof(a)/sizeof(a[0]))
	{
		j=i+1;
		int f=0;
		while(f==0)
		{
			if(a[j]>a[i]+k)
			{
				f=1;
				counter++;
				break;
			}
			j++;
			if(j==sizeof(a)/sizeof(a[0]))
			{
				counter++;
				f=2;
				break;
			}
		}
		j--;
		if(f==1)
		{
			f=0;
			i=j;
			j=i+1;
			while(f==0)
			{
				if(a[j]>a[i]+k)
				{
					f=1;
					break;
				}
				j++;
			}
			j--;
			i=j+1;
		}
		if(f==2)
			break;
	}
	cout<<counter<<endl;
}