#include<iostream>
using namespace std;
class add
{
private:
public:
    int a,b;
    void input()
    {
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<"\n";
    }
    sum complex(add,add);
};
sum sum::complex(add ob1,add ob2)
{
    add ob3;
    ob3.a=ob1.a+ob2.a;
    ob3.b=ob1.b+ob2.b;
    return ob3;
}
int main()
{
    sum ob1,ob2,ob3;
    ob1.input();
    ob2.input();
    ob1.display();
    ob2.display();
    ob3.complex(ob1,ob2);
    ob3.display();
}
