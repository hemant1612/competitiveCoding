#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int counter=0;
	for(int i=1;i<n;i++)
	{
		int current=i;
		for(int j=i-1;j>=0;j--)
		{
			if(a[j]>a[current])
			{
				int temp=a[current];
				a[current]=a[j];
				a[j]=temp;
				current--;
				counter++;
			}
			else
				break;
		}
	}
	cout<<counter<<endl;
}