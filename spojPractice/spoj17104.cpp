#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	//cout<<"BOO\n";
	int s;
	cin>>s;
	int *a1;
	a1=new int[s];
	for(int i=0;i<s;i++)
		cin>>a1[i];
	int q;
	cin>>q;
	int *a2;
	a2=new int[q];
	for(int i=0;i<q;i++)
	{
		cin>>a2[i];
	}
	/*for(int i=0;i<s;i++)
	{
		cout<<"1"<<a1[i]<<"2"<<a2[i]<<endl;
	}*/
	//string str;
	int count=0;
	for(int i=0;i<min(s,q);i++)
	{
		if(a1[i]==a2[i])
		{
			count++;
		}
	}
	int counter=0;
	for(int i=0;i<min(s,q);i++)
	{
		if(a1[i]==a2[i])
		{
			counter++;
			if(counter==count)
			{
				cout<<(i+1);
			}
			else
			{
				cout<<(i+1)<<" ";
			}
		}
	}
	cout<<endl;
}
//2 3 4