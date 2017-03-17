#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char vowels[]={'a','e','i','o','u'};
	vector<char> cons;
	char c='a';
	for(int i=1;i<=26;i++)
	{
		//cout<<c<<" ";
		if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='y')
		{
			cons.push_back(c);
		}
		c++;
	}
	/*for(int i=0;i<5;i++)
		cout<<vowels[i]<<" ";
	cout<<endl;
	for(int i=0;i<20;i++)
		cout<<cons[i]<<" ";
	cout<<endl;*/
	if(n==1)
	{
		for(int i=0;i<5;i++)
			cout<<vowels[i]<<endl;
		for(int i=0;i<20;i++)
			cout<<cons[i]<<endl;
	}
	if(n==2)
	{
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<20;j++)
			{
				cout<<vowels[i]<<cons[j]<<endl;
				cout<<cons[j]<<vowels[i]<<endl;
				
				//cout<<cons[i]<<vowels[i]<<endl;
			}
		}
	}
	else if(n==3)
	{
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<20;j++)
			{
				for(int k=0;k<5;k++)
				{
					cout<<vowels[i]<<cons[j]<<vowels[k]<<endl;
				}
			}
		}
		for(int i=0;i<20;i++)
		{
			for(int j=0;j<5;j++)
			{
				for(int k=0;k<20;k++)
				{
					cout<<cons[i]<<vowels[j]<<cons[k]<<endl;
				}
			}
		}
	}
	else if(n==4)
	{
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<20;j++)
			{
				for(int k=0;k<5;k++)
				{
					for(int l=0;l<20;l++)
					{
						cout<<vowels[i]<<cons[j]<<vowels[k]<<cons[l]<<endl;
						
					}
				}
			}
		}
		for(int i=0;i<20;i++)
		{
			for(int j=0;j<5;j++)
			{
				for(int k=0;k<20;k++)
				{
					for(int l=0;l<5;l++)
					{
						cout<<cons[i]<<vowels[j]<<cons[k]<<vowels[l]<<endl;
					}
				}
			}
		}
	}
	else if(n==5)
	{
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<20;j++)
			{
				for(int k=0;k<5;k++)
				{
					for(int l=0;l<20;l++)
					{
						for(int m=0;m<5;m++)
						{
							cout<<vowels[i]<<cons[j]<<vowels[k]<<cons[l]<<vowels[m]<<endl;
						}
					}
				}
			}
		}
		for(int i=0;i<20;i++)
		{
			for(int j=0;j<5;j++)
			{
				for(int k=0;k<20;k++)
				{
					for(int l=0;l<5;l++)
					{
						for(int m=0;m<20;m++)
						{
							cout<<cons[i]<<vowels[j]<<cons[k]<<vowels[l]<<cons[m]<<endl;
						}
					}
				}
			}
		}
	}
	else if(n==6)
	{
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<20;j++)
			{
				for(int k=0;k<5;k++)
				{
					for(int l=0;l<20;l++)
					{
						for(int m=0;m<5;m++)
						{
							for(int o=0;o<20;o++)
							{
								cout<<vowels[i]<<cons[j]<<vowels[k]<<cons[l]<<vowels[m]<<cons[o]<<endl;
							}
						}
					}
				}
			}
		}
		for(int i=0;i<20;i++)
		{
			for(int j=0;j<5;j++)
			{
				for(int k=0;k<20;k++)
				{
					for(int l=0;l<5;l++)
					{
						for(int m=0;m<20;m++)
						{
							for(int o=0;o<5;o++)
							{
								cout<<cons[i]<<vowels[j]<<cons[k]<<vowels[l]<<cons[m]<<vowels[o]<<endl;
							}
						}
					}
				}
			}
		}
	}
}