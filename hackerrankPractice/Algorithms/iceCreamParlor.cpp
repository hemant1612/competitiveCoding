#include <iostream>
#include <algorithm>
using namespace std;
int bSearch(int *a,int n,int low,int sh)
{
	int high=n-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==sh)
			return mid;
		else if(a[mid]>sh)
			high=mid-1;
		else if(a[mid]<sh)
			low=mid+1;
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a[i]=x;
		}	
		sort(a,a+n);
		for(int i=0;i<n-1;i++)
		{
			int ans=bSearch(a,n,i+1,m-a[i]);
			if(ans!=-1)
			{
				for(int j=0;i<n;j++)
				{
					if(a[ans]==b[j])
					{
						cout<<i+1<<" "<<j+1<<endl;
						break;
					}
				}
				break;
			}
		}
	}
}