#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<=n;i++)
            a[i]=1;
        long long int sum=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(a[i]==1)
            {
                int counter=0;
                for(int j=i*i;j<=n;j=i*i+counter*i)
                {
                    a[j]=0;
                    counter++;
                    sum+=j;
                    //cout<<"j "<<j<<endl;
                    //cout<<sum<<endl;
                }
            }
        }
        long long int ans=(n*(n+1)/2-1)-(sum);
        
        cout<<ans<<endl;

    }
}