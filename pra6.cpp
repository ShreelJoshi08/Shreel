#include<iostream>
#include<stdlib.h>
#include<string>
#include<iomanip>
using namespace std;
class Employee
{
    string name, qualification;
    float experience;
    int number,id;
    static int c;
    static float sum;
 public:
     Employee()
     {
         c++;
     }
      void getdata()
    {

        cout<<"------------------------\n";
        cout<<"Employee ID :";
        cin>>id;
        cout<<"name:";
        cin>>name;
        cout<<"qualification:";
        cin>>qualification;
        cout<<"experience(in years):";
        cin>>experience;
        cout<<"number:";
        cin>>number;

    }

     void output()
    {

        cout<<"employee name:"<<name<<endl;
        cout<<"qualification:"<<qualification<<endl;
        cout<<"experience:"<<experience<<" years"<<endl;
        cout<<"contect number:"<<number<<endl;

    }
     void TSum() const
    {
        sum+=experience;
    }
    static void AvgSum()
    {
        sum=sum/c;
    }
    void PrintSum() const
    {
        cout << "Average Experience is : "<<sum;

    }
    int getid()
    {
        return id;
    }

};
 int Employee :: c=0;
 float Employee :: sum=0;
int main()
{
    int i,n,idd,option;
    char yesno;
     cout<<"enter number of employee:";
    cin>>n;
    Employee e[n];
    for(i=0; i<n; i++)
   {
       e[i].getdata();
   }
   system("CLS");
   cout << "Enter 1 for employee data and 2 for average expireance :";
   cin>>option;
   switch ( option )
   {
    case 1:
   {

    do
   {
      start:
       cout<<"Enter an employee id :";
        cin>>idd;
       for(i=0;i<9999;i++)
       {
           if(idd==e[i].getid())
           {
               e[i].output();
           }
       }
       a:
        cout<<"press y for more employee detail,press n to exit:";
        cin>>yesno;
       if(yesno=='y' || yesno=='Y')
        {
            goto start;
        }
        else if(yesno=='n' || yesno=='N')
        {
            break;
        }
        else
        {
            cout<<"enter valid option";
            goto a;
        }
   }while(yesno=='Y' || yesno=='y');
   }
    case 2:
        {
            for(i=0;i<n;i++)
            {
                e[i].TSum();
               // Employee::AvgSum();

            }
             Employee::AvgSum();
             e[0].PrintSum();
        }
   }
}
