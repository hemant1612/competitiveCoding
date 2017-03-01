#include <iostream>
//#include <conio.h>
#include <string>
using namespace std;
struct node
{
  char data;
  node *next;
};

class stack
{
      node *top;
      public :
            stack()
            { top=NULL;}
             void push(char);
             char pop();
             void display();
            ~stack();
};

void stack::push(char c)
{
      node *temp;
      temp=new node;
      //cout<<"Enter data :";
      //cin>>temp->data;
      temp->data=c;
      temp->next=top;
      top=temp;
}

char stack::pop()
{
      if(top!=NULL)
      {
            node *temp=top;
            top=top->next;
            return temp->data;
            //cout<<temp->data<<"deleted";
            delete temp;
      }
      else
            cout<<"Stack empty"<<endl;
}

void stack::display()
{
      node *temp=top;
      while(temp!=NULL)
      {
        cout<<temp->data<<" ";
        temp=temp->next;
      }
}

stack::~stack()
{
      while(top!=NULL)
      {
            node *temp=top;
            top=top->next;
            delete temp;
      }
}

int main()
{
      stack st;
      int t;
      cin>>t;
      for(int q=1;q<=t;q++)
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
              char p=st.pop();
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
      /*char ch;
      do
      {
            cout<<"stack options\nP for push \nO for Pop \nD for Display \nQ for quit";
            cin>>ch;
            switch(ch)
            {
                  case 'P': st.push();break;
                  case 'O': st.pop();break;
                  case 'D': st.display();break;
            }
      }while(ch!='Q');*/
      return 0;
}