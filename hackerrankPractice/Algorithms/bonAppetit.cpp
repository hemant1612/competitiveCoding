#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		sum+=x;
		a[i]=x;
	}
	int charge;
	cin>>charge;
	if(charge==sum/2)
	{
		cout<<charge-(sum-a[k])/2<<endl;
	}
	else
		cout<<"Bon Appetit"<<endl;
}