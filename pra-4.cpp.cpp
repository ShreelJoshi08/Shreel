#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.14159;

class calculateArea
{
    private:
        int a;

    public:


    calculateArea(float x)
    {
        float r=x;
        cout<< "Area is:"<< PI*r*r<< endl;

    }
    calculateArea(float x,float y)
    {
        float l,b;
        l=x;
        b=y;
        cout<<"Area is"<<l*b<< endl;

    }
    calculateArea(float x,float y,float z)
    {
        float l,b,h;
        l=x;
        b=y;
        h=z;

        cout<<"Area is "<<2*(l*b +l*h +b*h)<<endl;

    }


};

int main()
{
    float a,b,c,d,e,f;


    cout<<"Enter the radius";
    cin>>a;
    class calculateArea A(a);


    cout<< "Enter  the lenght";
    cin>>b;
    cout<< "Enter  the width";
    cin>>c;

    class calculateArea B(b,c);

cout<< "Enter  the height";
cin>>d;
cout<< "Enter  the width";
cin>>e;
cout<< "Enter  the depth";
cin>>f;
    class calculateArea C(d,e,f);







    return 0;
}
