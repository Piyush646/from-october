#include<iostream>
using namespace std;
class sta
{
    private:
    public:
        string name;
        string accType;
        double balance;
        static double rate;
        sta()
        {
            name="";
            accType="";
            balance=0.0;
        }
        sta(string nam,string accTyp,double balanc)
        {
            name=nam;
            accType=accTyp;
            balance=balanc;
        }
        sta(sta &ob)
        {
          name=ob.name;
          accType=ob.accType;
          balance=ob.balance;
        }
        static void input()
        {
            //cout<<"Enter rate of interest"<<"\n";
            //cin>>rate;
            cout<<"Rate of interest is= "<<rate;
        }
        void depositAmount()
        {
            int depAmt;
            cout<<"Enter amount to be deposited\n";
            cin>>depAmt;
            balance=balance+depAmt;
        }
        void widAmt()
        {
            int wAmt;
            if(balance>2000)
            {
                cout<<"Enter amount to be withdrawn\n";
                cin>>wAmt;
                balance=balance-wAmt;
            }
            else
                {
                    cout<<"Minimum balance required";
                }
        }
        void allDetails()
        {
            cout<<"Name of customer is= "<<name<<"\n";
            cout<<"Account type is= "<<accType<<"\n";
            cout<<"Balance is= "<<balance<<"\n";
        }
};
double sta :: rate =6.0;
int main()
{
    sta ob;
    sta ob1("Piyush","Savings",4000.0);
    sta ob2(ob1);
    ob2.input();
    ob2.depositAmount();
    ob2.widAmt();
    ob2.allDetails();
}

