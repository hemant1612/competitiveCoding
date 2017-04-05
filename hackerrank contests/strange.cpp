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
		string a,b;
		cin>>a>>b;
		string parent=a+b;
		//cout<<parent<<endl;
		sort(parent.begin(),parent.end());
		//cout<<parent<<endl;
		int c;
		cin>>c;
		string children="";;
		for(int i=0;i<c;i++)
		{
			string child;
			cin>>child;
			children=children+child;
		}
		sort(children.begin(), children.end());
		//cout<<children<<endl;
		int counter=0;
		int l=parent.length();
		int f=1;
		for(int i=0;i<children.length();i++)
		{
			int flag=0;
			for(int j=0;j<l;j++)
			{
				if(children.at(i)==parent.at(j))
				{
					flag=1;
					parent=parent.substr(0,j)+parent.substr(j+1,l-j-1);
					l--;
					//cout<<parent<<endl;
					break;
				}
			}
			if(flag==0)
			{
				f=0;
				break;
			}
		}
		if(f==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}