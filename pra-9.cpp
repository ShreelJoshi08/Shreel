#include <iostream>
#include <iomanip>
using namespace std;


class millimeter;
class centimeter
{
    float cm;
public:
    float getadta()
    {
        cout << "Enter the value in centimeter ";
        cin >> cm;
    }
    float putdata1()
    {
        return cm;
    }

    centimeter()
    {
        cm=0;

    }
centimeter(millimeter &n);

};





class millimeter
{
    float mm;
public:

    millimeter()
    {
        mm=0;
    }

    putdata()
    {
        cout<< mm;
    }
    float getadta1()
    {
        cout << "Enter the value in mm ";
        cin >> mm;
    }

    float putdata1()
    {
        return mm;
    }
    millimeter(centimeter &n);
};
centimeter::centimeter(millimeter &n)

    {
        cm ={n.putdata1()/10};
    }
millimeter::millimeter(centimeter &n)
    {
        mm={n.putdata1()*10};
    }


int main()

{
    int n;

    cout << "Enter 1: mm to cm converter"<< endl;
    cout << "Enter the 2: cm to mm converter"<< endl;

    cin>> n;
    switch(n)
    {
    case 1:
    {
        class millimeter ob;
        ob.getadta1();
        class  centimeter oa;
        ob=oa;
        oa.putdata1();
        break;
    }
    case 2:
    {
        class centimeter oa;


        oa.getadta();
        class millimeter ob;
        ob=oa;
        ob.putdata();

        break;

    }
    }




    return 0;
}




