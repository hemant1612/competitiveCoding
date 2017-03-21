#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int v1=0,v2=0,v3=0,v4=0,v5=0,v6=0,v7=0,v8=0;
		for(int i=0;i<38;i++)
		{
			string check=s.substr(i,3);
			if(check=="TTT")
				v1++;
			else if(check=="TTH")
				v2++;
			else if(check=="THT")
				v3++;
			else if(check=="THH")
				v4++;
			else if(check=="HTT")
				v5++;
			else if(check=="HTH")
				v6++;
			else if(check=="HHT")
				v7++;
			else if(check=="HHH")
				v8++;
		}
		cout<<n<<" "<<v1<<" "<<v2<<" "<<v3<<" "<<v4<<" "<<v5<<" "<<v6<<" "<<v7<<" "<<v8<<endl;
	}
}
