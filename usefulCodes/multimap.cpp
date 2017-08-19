#include <bits/stdc++.h>
using namespace std;
int main()
{
	//declaration
	multimap<int,int> m;
	//insertion
	m.insert(make_pair(5,5));
	m.insert(make_pair(5,4));
	m.insert(make_pair(4,3));
	//specific output
	cout<<m.find(5)->second<<endl;
	//erase
	m.erase(m.find(5));
	//multimap baby!
	cout<<m.find(5)->second<<endl;
	//sequencial output
	for(auto x:m)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
}