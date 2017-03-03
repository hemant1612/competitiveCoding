#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
    	int n=0;
    	//cout<<"enter the number of elements\n";
    	cin>>n;
    	int *a;
    	//int *b;
    	
    	a=new int[n];
    	//b=new int[n];
        //int a[20], i, b[20];
        //cout<<"enter  the elements\n";
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        //cout<<"sorted array\n";
        /*for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }*/
        //cout<<endl;
        for(int i=1;i<n-1;i++)
            {
                if(a[i]-a[i-1]==1&&a[i+1]-a[i]!=1)
                {
                    cout<<(a[i+1])<<endl;
                    break;
                }
                if(a[i]-a[i-1]!=1&&a[i+1]-a[i]==1)
                {
                    cout<<(a[i-1])<<endl;
                    break;
                }

            }
        //cout<<"\n";
    }
}