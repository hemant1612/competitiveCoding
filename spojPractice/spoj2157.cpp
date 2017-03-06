#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cout<<endl;
		string s;
		cin>>s;
		int cp=0,ce=0;
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i)=="+")
				cp=i;
			else if(s.at(i)=='=')
				ce=i;
		}
		cout<<cp<<" "<<ce<<endl;
		string s1=s.substr(0,cp-1);
		string s2=s.substr(cp+2,ce-cp-2-1);
		string s3=s.substr(ce+2,s.length()-ce-2);
		cout<<s1<<" "<<s2<<" "<<s3<<" "<<"ameya"<<endl;
	}
}