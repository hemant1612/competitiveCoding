#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalin(long long int n)
{
	string s=to_string(n);
	int f=1;
	int length=s.length();
	for(int i=0;i<length/2;i++)
	{
		if(s.at(i)!=s.at(length-1-i))
		{
			f=0;
			break;
		}
	}
	if(f==0)
		return false;
	else
		return true;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		cin>>n;
		n++;
		long long int f=1;
		while(f==1)
		{
			bool ans=isPalin(n);
			if(ans==true)
			{
				cout<<n<<endl;
				f=0;
				break;
			}
			else
			{
				n++;
			}
		}
	}
}