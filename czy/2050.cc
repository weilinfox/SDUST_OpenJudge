#include <iostream>
#include "iomanip"

using namespace std;

class Data
{
    private:
        double x;
    public:
        Data(){cout<<"Initialize a data 0"<<endl;}
        Data(double xx)
        {
            x=xx;
            cout<<"Initialize a data "<<x<<endl;
        }
        double init(double xx){x=xx;}
         double getValue(){return x;}
          void showValue()
          {
              cout<<x<<endl;
          }


};

int main()
{
    Data data1;
    double d;
    cin>>d;
    Data data(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/**************************************************************
	Problem: 2050
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

