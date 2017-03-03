#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int cp;
	int ce;
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)=='+')
			cp=i;
		else if(s.at(i)=='=')
			ce=i;
	}
	string s1=s.substr(0,cp-1);
	string s2=s.substr(cp+2,ce-cp-3);
	string s3=s.substr(ce+2,s.length()-ce-2);
	/*int d=0;
	for(int i=0;i<s.length();i++)
	{
		if((int)s1.at(i)>=97||(int)s1.at(i)<=122)
		{
			int d=1;
			break;
		}
		else if((int)s2.at(i)>=97||(int)s2.at(i)<=122)
		{
			int d=2;
			break;
		}
		else if((int)s3.at(i)>=97||(int)s3.at(i)<=122)
		{
			int d=3;
			break;
		}
	}
	if(d==1)
	{
		int n2;
		stringstream convert1(s2);
		convert1 >> n2;
		int n3;
		stringstream convert2(s3);
		convert2 >> n3;
		int n1=n3-n2;
		cout<<n1<<" + "<<n2<<" = "<<n3;
	}
	else if(d==2)
	{
		int n1;
		stringstream convert1(s1);
		convert1 >> n1;
		int n3;
		stringstream convert2(s3);
		convert2 >> n3;
		int n2=n3-n1;
		cout<<n1<<" + "<<n2<<" = "<<n3;
	}
	else
	{
		int n1;
		stringstream convert1(s1);
		convert1 >> n1;
		int n2;
		stringstream convert2(s2);
		convert2 >> n2;
		int n3=n2+n1;
		cout<<n1<<" + "<<n2<<" = "<<n3;
	}*/
}