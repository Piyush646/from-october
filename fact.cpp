//PIYUSH POKHRIYAL 1918535  SEC B
//find factorial using constructor
#include<iostream>
using namespace std;
class fact
{
    private:int x;
    public:
        fact(int a)
        {
          x=a;
        }
        fact(fact &ob)
        {
            x=ob.x;
        }
        void input()
        {
            cout<<"Enter number to find its factorial\n";
            cin>>x;
        }
        int factorial()
        {
            int i;
            int f=1;
            for(i=1;i<=x;i++)
                f=f*i;
            return f;
        }
};
int main()
{
    int x;
    fact ob(x);
    ob.input();
    fact ob2(ob);
    cout<<"Factorial is "<<ob2.factorial();
}
