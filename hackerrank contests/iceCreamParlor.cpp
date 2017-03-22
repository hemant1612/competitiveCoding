#include <iostream>
#include <algorithm>
using namespace std;
int binaryS(int low,int high,int sh,int *a)
{
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==sh)
		{

			return sh;
		}
		else if(a[mid]>sh)
			high=mid-1;
		else if(a[mid]<sh)
			low=mid+1;
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[m],b[m];
		for(int i=0;i<m;i++)
		{
			int x;
			cin>>x;
			a[i]=x;
			b[i]=x;
		}
		sort(a,a+m);
		int i=0;
		int term1=0,term2=0;
		for(i=0;i<m-1;i++)
		{
			int sh=n-a[i];
			//cout<<sh<<" sh"<<endl;
			//cout<<a[i]<<" ai"<<endl;
			int ans=binaryS(i,m-1,sh,a);
			//cout<<ans<<" ans"<<endl;
			if(ans>0)
			{
				
				term1=sh;
				term2=a[i];
				break;
			}
		}
		
		int index1=0,index2=0;
		int f1=0,f2=0;
		for(int j=0;j<m;j++)
		{
			if(f1==0)
			{
				if(b[j]==term1)
				{
					//cout<<"j1 "<<j<<endl;
					index1=j;
					f1=1;
				}
			}
			if(f2==0)
			{
				if(b[j]==term2)
				{
					//cout<<"j2 "<<j<<endl;
					index2=j;
					f2=0;
				}
			}
		}
		if(index2>index1)
			cout<<index1+1<<" "<<index2+1<<endl;
		else
			cout<<index2+1<<" "<<index1+1<<endl;
	}
}