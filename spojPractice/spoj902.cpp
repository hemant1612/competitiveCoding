#include <iostream>
using namespace std;
int main()
{
	int f=1;
	while(f==1)
	{
		float n;
		cin>>n;
		if(n!=0.0)
		{
			float sum=0;
			int counter=1;
			while(sum<=n)
			{
				sum=sum+(1.0/(counter+1.0));
				counter++;
			}
			cout<<(counter-1)<<" card(s)"<<endl;
		}
		else
			f=0;
	}
	return 0;
}