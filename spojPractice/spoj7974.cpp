#include <iostream>
using namespace std;
int main()
{
	int f=1;
	while(f==1)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)
			f=0;
		else
		{
			if(b-a==c-b)
			{
				int next=c+c-b;
				cout<<"AP "<<next<<endl;
			}
			else
			{
				int next=c*(c/b);
				cout<<"GP "<<next<<endl;
			}
		}
	}
}