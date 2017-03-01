#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int counter=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(i*j<=n)
				counter++;
			else
				break;
		}
	}
	cout<<counter<<endl;
}