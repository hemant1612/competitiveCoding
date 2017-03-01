#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int isPalindrome(int n)
{
	string s=to_string(n);
	int f=1;
	for(int i=0;i<(int)(floor(s.length()/2));i++)
	{
		char c1=s.at(i);
		char c2=s.at(n-i-1);
		if(c1!=c2)
		{
			f=0;
			break;
		}
	}
	if(f==1)
		return 1;
	else
		return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;
		int f=1;
		while(f==1)
		{
			int ans=isPalindrome(++n);
			if(ans==1)
			{
				cout<<n;
				f=0;
				break;
			}
		}
	}
}
