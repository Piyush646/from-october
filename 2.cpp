#include <iostream>
using namespace std;
#include <string>
int main()
{
    string a="hello";
    int i=0;
    while(a[i]!='\0')
    {
        cout<<a[i];
        i++;
    }
    string b;
    b="right";
    b[1]='c';
    cout<<b;
}
