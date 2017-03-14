#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	stack<int> s;
	vector<int> v;
	int max=0;
	int counter=-1;
	while(t--)
	{
		int a, b;
		cin>>a;
		if(a==1)
		{
			cin>>b;
			if(b>max)
			{
				max=b;
				counter++;
				v[counter]=max;
				
			}
			s.push(b);
		}
		if(a==2)
		{
			int check=s.top();
			if(check==max)
				counter--;
			s.pop();
		}
		if(a==3)
			cout<<v[counter]<<endl;
	}
}