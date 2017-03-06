#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void simpleSieve(int limit, vector<int> &prime)
{
    //cout<<"limit="<<limit;
    bool mark[limit+1];
    memset(mark, true, sizeof(mark));
    //cout<<"sizeof mark="<<sizeof(mark);
    for (int p=2; p*p<limit; p++)
    {
        if (mark[p] == true)
        {
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }

    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);

        }
    }

}

void simpleSieve1(int limit, vector<int> &prime)
{
    //cout<<"limit="<<limit;
    bool mark[limit+1];
    memset(mark, true, sizeof(mark));
    //cout<<"sizeof mark="<<sizeof(mark);
    for (int p=2; p*p<limit; p++)
    {
        if (mark[p] == true)
        {
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }

    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
            cout<<p<<"\n";
        }
    }

}

void segmentedSieve(int m,int n)
{
    int limit = floor(sqrt(n))+1;
    vector<int> prime;  
    if(sqrt(n)<m)
    {
            simpleSieve(limit, prime); 
            bool mark[n-m+1];
            memset(mark, true, sizeof(mark));
            for (int i = 0; i < prime.size(); i++)
            {
                int loLim = floor(m/prime[i]) * prime[i];
                if (loLim < m)
                    loLim += prime[i];

                for (int j=loLim; j<n; j+=prime[i])
                    {
                        mark[j-m] = false;
                        
                    }
            }
            
            for (int i = m; i<n; i++)
                if (mark[i - m] == true)
                    cout << i <<"\n";
    }
    else
    {
        simpleSieve1(limit, prime);
        if(m==1)
            m++;
            bool mark[n-m+1];
            memset(mark, true, sizeof(mark));
            for (int i = 0; i < prime.size(); i++)
            {
                int loLim = floor(m/prime[i]) * prime[i];
                if (loLim < m)
                    loLim += prime[i];

                for (int j=loLim; j<n; j+=prime[i])
                    {
                        mark[j-m] = false;
                        
                    }
            }
            
            for (int i = m; i<n; i++)
                if (mark[i - m] == true)
                    cout << i << "\n";
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        n++;
        segmentedSieve(m,n);
        cout<<endl;
    }
    return 0;
}