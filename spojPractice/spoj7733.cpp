#include <iostream>
#include <math.h>
#include <string>
using namespace std;
string happy(string s)
{
	int ans=0;
	for(int i=0;i<s.length();i++)
	{
		ans+=pow(s.at(i)-'0',2);
	}
	//cout<<ans<<endl;
	return to_string(ans);
}
int main()
{
	string s;
	cin>>s;
	int f=1;
	int counter=0;
	while(f==1)
	{
		string ans;
		ans=happy(s);
		if(ans.length()==1)
		{
			if(ans=="1"||ans=="7")
			{
				f=0;
				break;
			}
			else
			{
				counter=-1;
				f=0;
				break;
			}
		}
		else
		{
			counter++;
			s=(ans);
		}
	}
	if(counter==-1)
		printf("-1\n");
	else
		printf("%d\n",++counter );
}