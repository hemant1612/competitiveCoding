#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	string sfinal="";
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)==' ')
			continue;
		else
			sfinal=sfinal+s.at(i);
	}
	
	double l=sqrt(sfinal.length());
	
	int row=floor(l);
	int col=ceil(l);
	
	int f=1;
	while(f==1)
	{
		if(row*col<l*l)
			row++;
		else
		{
			f=0;break;
		}
	}
	
	char c[row][col];
	int k=0;
	int sfinalLen=sfinal.length();
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(k<sfinalLen)
			{
				c[i][j]=sfinal.at(k);
				k++;
			}
			else
			{
				c[i][j]='0';
			}
		}
	}
	
	for(int j=0;j<col;j++)
	{
		string ans="";
		for(int i=0;i<row;i++)
		{
			if(c[i][j]!='0')
				ans+=c[i][j];
			else
				continue;
		}
		cout<<ans<<" ";
	}
	cout<<endl;
}