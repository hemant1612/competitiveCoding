#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int counter=0;
    int max=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>max)
        {
            max=x;
            counter=0;
        }
        if(x==max)
            counter++;
    }
    cout<<counter<<endl;
}