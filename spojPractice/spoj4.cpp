#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
      stack<char> st;
      int t;
      cin>>t;
      while(t--)
      {
        string s;
        cin>>s;
        string ans;
        for(int i=0;i<s.length();i++)
        {
            char c=s.at(i);
            if(c=='+'||c=='*'||c=='/'||c=='-'||c=='^')
            {
                st.push(c);
            }
            else if(c==')')
            {
              char p=st.top();
              st.pop();
              ans=ans+p;
            }
            else if(c=='(')
              continue;
            else
            {
              ans=ans+c;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}