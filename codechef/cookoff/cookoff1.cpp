#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		int h=0,v=0;
		int leftm=0,rightm=0,upm=0,downm=0;
		for(int i=0;i<s.length();i++)
		{
			char c=s.at(i);
			if(c=='L')
				h--;
			if(c=='R')
				h++;
			if(c=='U')
				v++;
			if(c=='D')
				v++;
			if(h<leftm)
				leftm=h;
			if(h>rightm)
				rightm=h;
			if(v>upm)
				upm=v;
			if(v<downm)
				downm=v;
		}
		if(rightm-leftm>=m)
			cout<<"unsafe"<<endl;
		else if(upm-downm>=n)
			cout<<"unsafe"<<endl;
		else
			cout<<"safe"<<endl;
	}
}