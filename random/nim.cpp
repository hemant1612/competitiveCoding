#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int nimX=0;
	for(int i=0;i<n;i++)
		nimX=nim^a[i];
	int f=1;
	while(f==1)
	{
		int check=-1;
		for(int i=0;i<n;i++)
		{
			check=nimX^a[i];
			if(check<a[i])
			{
				a[i]=check;
				break;
			}
		}
	}
}