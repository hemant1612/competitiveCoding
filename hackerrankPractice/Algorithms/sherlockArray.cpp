#include <iostream>
using namespace std;
int binaryS(int *a,int n)
{
	/*for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;*/
	int low=0,high=n-1;
	int total=a[n-1];
	int f=0;
	while(low<high)
	{
		int mid=low+(high-low)/2;
		if(a[mid-1]>(total-a[mid]))
			high=mid;
		else if(a[mid-1]<(total-a[mid]))
			low=mid+1;
		else if(a[mid-1]==(total-a[mid]))
			{
				f=1;
				return 1;
			}
	}
	if(f==0)
		return 0;
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			sum+=x;
			a[i]=sum;
		}	
		if(n!=1)
		{
			int ans=binaryS(a,n);
			if(ans==1)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
			cout<<"YES"<<endl;
	}
}