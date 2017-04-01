#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int leadf=0;
	int p=0;
	int sc1=0,sc2=0;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		sc1+=x;
		sc2+=y;
		int lead=max(sc1,sc2)-min(sc1,sc2);
		if(lead>leadf)
		{
			if(sc1==max(sc1,sc2))
			{
				p=1;
				leadf=lead;
			}
			else
			{
				p=2;
				leadf=lead;
			}
		}
	}
	cout<<p<<" "<<leadf<<endl;

}