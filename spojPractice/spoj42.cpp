#include <iostream>
#include <string> //for strings
#include <algorithm> //for reversing strings
#include <sstream> //for converting 
using namespace std;
int reverse(string s)
{
	int x;
	reverse(s.begin(),s.end()); //reverses the string
	stringstream convert(s); //convert is object of stringstream
	convert>>x; //code used to convert string to int
	return x;
}
int main()
{
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
		string a,b;
		cin>>a>>b;
		int c=reverse(a);
		int d=reverse(b);
		//cout<<"revers a "<<c<<endl;
		//cout<<"revers b "<<d<<endl;
		int sum=c+d;
		stringstream convert; //convert is object of stringstream
		convert<<sum; //converting int to string 
		int ans=reverse(convert.str()/*convert.str()outputs the sum int as sum string*/);
		cout<<ans<<endl;
	}
}