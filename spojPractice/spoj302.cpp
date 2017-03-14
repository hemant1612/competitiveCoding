#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i=1,terms=1,counter=1,f=1;
		int nu=0,de=0;
		while(f==1)
		{
			if(n<=terms)
			{
				if(counter%2==0)
				{
					nu=n-(terms-i);
					de=i+1-nu;
				}
				else
				{
					de=n-(terms-i);
					nu=i+1-de;
				}
				f=0;
				break;
			}
			i++;
			terms+=i;
			counter++;
		}
		cout<<"TERM "<<n<<" IS "<<nu<<"/"<<de<<endl;
	}
}