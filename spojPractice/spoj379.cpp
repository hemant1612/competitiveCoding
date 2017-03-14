#include <iostream>
#include <string>
using namespace std;
int main()
{
	int f=1;
	while(f==1)
	{
		int n;
		cin>>n;
		if(n==0)
			f=0;
		else
		{
			string check="";
			cin.ignore();
			getline(cin,check);
			string ans="";
			string s="";
			for(int i=0;i<check.length();i++)
			{
				if(check.at(i)!=' ')
					s=s+check.at(i);
			}
			//cout<<s<<endl;
			int flag=1;
			int counter=0;
			outer:
			{
				for(int i=1;i<=s.length();i++)
				{
					for(int j=0;j<s.length();j++)
					{
						if((s.at(j)-'0')==i)
							{

								if((j+1)!=s.at(counter)-'0')
								{
									flag=0;
									break outer;
								}
								counter++;
								break;
							}
					}
				}
			}
			//cout<<ans<<endl;
			if(flag==1)
				cout<<"ambiguous"<<endl;
			else
				cout<<"not ambiguous"<<endl;
		}
	}
}