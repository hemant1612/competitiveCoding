#include <iostream>
#include <algorithm>
using namespace std;
int bsearch(int low,int high,int k,int *a,int value)
{
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]-value==k)
			return 1;
		else if((a[mid]-value)>k)
			high=mid-1;
		else
			low=mid+1;
	}
	return 0;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int counter=0;
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		int ans=bsearch(i+1,n-1,k,a,a[i]);
		if(ans==1)
			counter++;
	}
	cout<<counter<<endl;
}