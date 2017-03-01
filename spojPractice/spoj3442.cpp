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
		a=a%10;
		//cout<<a<<" a"<<endl;
		if(b!=0)
		{
			b=b%4;
			//cout<<b<<" b"<<endl;
			if(b==0)
				b=4;
			int ans=1;
			for(int i=1;i<=b;i++)
				ans=ans*a;
			cout<<ans%10<<endl;
		}
		else
		{
			cout<<"1\n";
		}

	}
}