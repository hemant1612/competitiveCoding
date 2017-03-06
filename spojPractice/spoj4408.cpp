#include <iostream>
#include <iomanip>
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
			double l=(double)n;
			//cin>>l;
			double a=l*l/(2.0*3.14159);
			cout<<setprecision(2)<<fixed<<a<<endl;
		}
	}
}