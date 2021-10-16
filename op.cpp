#include<iostream>
using namespace std;
class complex
{
    private:
    public:
    double a,b;
    complex(double real,double img)
    {
        a=real;
        b=img;
    }
    display()
    {
        cout<<a<<"+"<<b<<"i";
    }
    complex operator +(complex ob)
    {
er         complex ob3;
        ob3.a=a+ob2.a;
        ob3.b=b+ob2.b;
        return ob3;
    }
};
int main()
{
    complex ob1,ob2,ob3;
    ob1=complex(2.0,3.0);
    ob1.display();
    ob2=complex(4.0,6.0);
    ob2.display();
    ob3=ob1+ob2;
    ob3.display();
}


