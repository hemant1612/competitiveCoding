#include <iostream>
#include <unordered_map>
typedef long long int lli;
using namespace std;
/*
	inspired from this blog
		http://codeforces.com/blog/entry/18292
*/
const lli MOD=1000000007;
unordered_map<lli,lli>Fib;
lli fib(lli n)
{
	if(n<2)
		return 1;
	if(Fib.find(n)!=Fib.end())
		return Fib[n];
	 Fib[n] = (fib((n+1) / 2)*fib(n/2) + fib((n-1) / 2)*fib((n-2) / 2)) % MOD;
	 return Fib[n];
}
int main()
{
    while(true)
    {
        lli N;
        cin >> N;
        if(N<0) return 0;
        cout << fib(N) << "\n";
    }
}
