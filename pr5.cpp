#include <iostream>
#include <iomanip>
const double PI = 3.14159;
using namespace std;


class circle
{
private:

    static int totalcircles;

public:
    float radius;
    circle()
    {
        totalcircles++;
        radius=1;
    }
  circle(float x)
  {


    totalcircles++;
    radius=x;

  }

  circ le(circle&y)
  {
       totalcircles++;
        radius = y.radius;
  }

   ~circle()
   {
       cout<<"One object is deleted"<<endl;
        totalcircles--;
        cout<<"Total active objects are "<<totalcircles<<endl;
   }

   float cal_area()
   {

       cout<< "the area is"<<PI*radius*radius;
   }

};
int circle:: totalcircles=0;

int main()
{
    class circle*n;
    n= new circle();
    cout<< "Circle with radius 1 has area "<< n->cal_area()<<endl;

    class circle*n1;
    n1=new circle(20);
     cout<< "Circle with radius 20 has area "<< n1->cal_area()<<endl;

    class circle*n2;
    n2=new circle(*n);
    cout<< "Circle with radius 20 has area "<< n2->cal_area()<<endl;


    delete n;
    delete n1;
    delete n2;


}



