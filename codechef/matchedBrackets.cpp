#include <iostream>
#include <stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int max=0,ans=0,counter=0,maxp=0,nest=0,nestp=0;
	int f1=0,f2=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			counter++;
		}
		else
		{
			if(counter>nest)
			{
				nest=counter;
				nestp=i-1;
				f1=1;
			}
			counter--;
		}
		max++;
		if(counter==0&&max>ans)
		{
			ans=max;
				max=0;
				maxp=i-(ans-1);
				f2=1;
				//cout<<"ans "<<ans<<endl;
		}
		if(counter==0)
			max=0;
	}
	cout<<nest<<" "<<nestp+1<<" "<<ans<<" "<<maxp+1<<endl;
}