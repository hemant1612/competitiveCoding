#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string ss;
		getline(cin,ss);
		string s;
		getline(cin,s);
		//cout<<s<<endl;
		int cp=0,ce=0;
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i)=='+')
				cp=i;
			else if(s.at(i)=='=')
				ce=i;
		}
		//cout<<cp<<" "<<ce<<endl;
		string s1=s.substr(0,cp-1);
		string s2=s.substr(cp+2,ce-cp-2-1);
		string s3=s.substr(ce+2,s.length()-ce-2);
		//cout<<s1<<" "<<s2<<" "<<s3<<" "<<"ameya"<<endl;
		int d=0;
			for(int i=0;i<s.length();i++)
			{
				if((int)s1.at(i)>=97&&(int)s1.at(i)<=122)
				{
					 d=1;
					break;
				}
				else if((int)s2.at(i)>=97&&(int)s2.at(i)<=122)
				{
					 d=2;
					break;
				}
				else if((int)s3.at(i)>=97&&(int)s3.at(i)<=122)
				{
					 d=3;
					break;
				}
			}
			//System.out.println(d);
			if(d==1)
			{
				int n2=atoi(s2.c_str());
				//int n2=Integer.parseInt(s2);
				int n3=atoi(s3.c_str());
				//int n3=Integer.parseInt(s3);;
				
				int n1=n3-n2;
				cout<<n1<<" + "<<n2<<" = "<<n3<<endl;
			}
			else if(d==2)
			{
				int n1=atoi(s1.c_str());
				
				int n3=atoi(s3.c_str());;
				
				int  n2=n3-n1;
				cout<<n1<<" + "<<n2<<" = "<<n3<<endl;
				
			}
			else
			{
				int n1=atoi(s1.c_str());
				
				int n2=atoi(s2.c_str());
				
				int n3=n2+n1;
				cout<<n1<<" + "<<n2<<" = "<<n3<<endl;
			}
	}
}