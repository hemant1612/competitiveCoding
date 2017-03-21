#include <iostream>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	int sum=0;
	while(t--)
	{
		int x=0;
		scanf("%d",&x);
		if(x>0)
			sum+=x;
		if(t==0)
			printf("%d\n",sum);
	}
}