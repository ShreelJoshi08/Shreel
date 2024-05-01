#include <iostream>
#include <iomanip>
using namespace std;


class Experience
{
    float Exp;
    int years,months;
public:
    Experience ()

    {
       Exp=0;
    }
    Experience (float &x)
    {
        years=x;
        months=((x-years)*12);
    }
    void putdata()
    {
        cout <<"Employee  experience is "<<years<<" and "<< months<<"months";
    }

};
int main()
{
    float a;
    cout<< "Enter employee experience ::";
    cin >> a;

    class Experience A;
    A=a;

    A.putdata();
    return 0;

}

