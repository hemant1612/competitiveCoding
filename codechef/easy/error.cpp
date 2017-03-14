#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int f=0;
		
		for(int i=0;i<=s.length()-3;i++)
		{
			if((s.at(i)=='0'&&s.at(i+1)=='1'&&s.at(i+2)=='0'))
			{
				cout<<"Good"<<endl;
				f=1;
				break;
			}
			else if((s.at(i)=='1'&&s.at(i+1)=='0'&&s.at(i+2)=='1'))
			{
				cout<<"Good"<<endl;
				f=1;
				break;
			}

		}
		if(f==0)
			cout<<"Bad"<<endl;
	}
	return 0;
}