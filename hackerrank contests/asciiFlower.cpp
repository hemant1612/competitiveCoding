#include <iostream>
#include <string>
using namespace std;
void flower(int c)
{
	string s1="..O..";
	string s2="O.o.O";
	string s3="..O..";
	for(int i=1;i<=c;i++)
		cout<<s1;
	cout<<endl;
	for(int i=1;i<=c;i++)
		cout<<s2;
	cout<<endl;
	for(int i=1;i<=c;i++)
		cout<<s3;
	cout<<endl;
}
int main()
{
	int r,c;
	cin>>r>>c;
	for(int i=1;i<=r;i++)
	{
		flower(c);
	}
	return 0;
}