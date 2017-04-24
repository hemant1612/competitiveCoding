#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double pizza=0;
	int c1=0,c2=0,c3=0;
	while(n--)
	{
		cin.ignore();
		string s;
		cin>>s;
		if(s=="1/2")
			c1++;
		else if(s=="1/4")
			c2++;
		else
			c3++;
	}
	if(c2!=0&&c3!=0)
	{
		if(c2>c3)
		{
			pizza+=c3;
			c3=0;
			c2=c2-c3;
		}
		else
		{
			pizza+=c2;
			c2=0;
			c3=c3-c2;
		}
	}
	pizza+=c3;
	int left=c2%2;
	pizza+=left;
	c2=c2/2;
	if(c1>=c2)
	{
		pizza+=c2;
		c1=c1-c2;
		c2=0;
	}
	else
	{
		
	}
}