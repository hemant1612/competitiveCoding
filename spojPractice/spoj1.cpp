#include <iostream>
using namespace std;
int main()
{
	int f=1;
	while(f==1)
	{
		int n;
		cin>>n;
		if(n!=42)
			cout<<n<<endl;
		else
			f=0;
	}

}