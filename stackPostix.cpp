#include <iostream>
#include <string>
using namespace std;
class stackPostfix
{
    public:
    struct node
    {
        char data;
        node *next;
    }*top=NULL;

    void push(char x)
    {
        node *t=new node();
        if(t==NULL)
        {
            cout<<"The stack is full\n";
        }
        else
        {
            t->data=x;
            t->next=top;
            top=t;
        }
    }

    char pop()
    {
        char x;
        if(top==NULL)
        {
            cout<<"The stack is empty";
        }
        else
        {

        node *t=top;
        top=top->next;
        x=t->data;
        delete(t);
        }
        return x;
    }

    void display()
    {
        node *t=top;
        while(top!=NULL)
        {
            cout<<t->data;
            t=t->next;
        }
    }

    int pre(char x)
    {
        if(x=='*' || x=='/')
            return 2;
            else if(x=='+'|| x=='-')
                return 1;
            else
                return 0;
    }

    int isOperand(char x)
    {
        if(x=='+'|| x=='-' || x=='*' || x=='/')
            return 0;
        else
            return 1;
    }

    string inToPost(char infix[])
    {
        cout<<infix;
        int i=0;
		int j=0;

       // int len=infix.size();
        //cout<<len;
        char postfix[];
//       int len2=postfix.length();
       // cout<<len2;
        while(infix[i]!='\0')
        {
            if(isOperand(infix[i]))
            {
                postfix[j]=infix[i];
                i++;
                j++;
            }
            else
            {
                if(pre(infix[i])>pre(top->data))
                {
                    push(infix[i]);
                    i++;
                }
                else
                {
                    postfix[j]=pop();
                    i++;
                }
            }
        }

        while(top!=NULL)
        {
        postfix[j]=pop();
        j++;
   		}
   		postfix[j]='\0';
   		string postfix2=(string)postfix;
    return postfix2;

//        postfix[j]='\0';
//        int k=0;
//        while(postfix[k]!='\0')
//        {
//            cout<<postfix[k];
//            k++;
//        }
    }
};
int main()
{
    stackPostfix ob;
//    ob.push('a');
//    ob.push('+');
//    ob.push('b');
    char c[]="a+b";
    string in=(string)c;
    string a=ob.inToPost(in);
    cout<<a;
    return 0;
}
