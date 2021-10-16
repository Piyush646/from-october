//PIYUSH POKHRIYAL 1918535  SEC B
//find area using constructor overloading
#include<iostream>
using namespace std;
class area
{
    private:
    public:
                    area(int h,float b)
                    {
                        cout<<"Area of triangle is "<<(0.5f*b*h);
                    }
                    area(int l,int b)
                    {
                       cout<<"Area of rectangle is "<<(l*b);
                    }
                    area(int r)
                    {
                        cout<<"Area of circle is "<<(3.14f*r*r);
                    }
};
int main()
{
    int ch;
            cout<<"Enter your choice for area\n1 for Triangle\n2 for rectangle\n3 for circle\n";
            cin>>ch;
            switch(ch)
            {
                case 1:
                    area(5,2.2f);
                    break;
                    case 2:
                    area(11,3);
                    break;
                    case 3:
                    area(6);
                    break;
                    default:
                    cout<<"Ivalid Choice";
                    break;
            }
            return 1;
}

