#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int j=0;
	long sum=0;
	for(int i=n-1;i>=0;i--)
	{
		sum+=a[i]*pow(2,j);
		j++;
	}
	cout<<sum<<endl;
}