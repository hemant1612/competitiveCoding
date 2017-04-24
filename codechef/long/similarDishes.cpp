#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore();
		string a1[4];
		string a2[4];
		for(int i=0;i<4;i++)
			cin>>a1[i];
		for(int i=0;i<4;i++)
			cin>>a2[i];
		int counter=0;
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(a1[i]==a2[j])
					counter++;
			}
			if(counter==2)
					break;
		}
		if(counter>=2)
			cout<<"similar"<<endl;
		else cout<<"dissimilar"<<endl;
	}
}