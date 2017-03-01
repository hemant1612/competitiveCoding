#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
		int a,b;
		cin>>a>>b;
		int f=0;
		int n=0;
		if(a%2==0)
		{
			int r=a/2;
			int b1=2*r-2;
			if(b1==b)
				{
					f=1;
					n=4*r-2;
				}
			if(a==b)
				{
					f=1;
					n=2*a;
				}
		}
		else
		{
			int r=(a-1)/2;
			int b1=2*r-1;
			if(b1==b)
				{
					f=1;
					n=4*r-1;
				}
			if(a==b)
				{
					f=1;
					n=4*r+1;
				}
		}
		if(a==1&&b==1)
			cout<<"1\n";
		else if(f==1)
		{
			cout<<n<<endl;
		}
		else
			cout<<"No Number\n";
	}
	return 0;
}