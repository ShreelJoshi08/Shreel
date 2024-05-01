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
      void gettdata()
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

     void outtput()
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
        sum=(sum/c);
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
class T_Emp : public Employee
{
    string Desiignation,speccialization;
    float Pay_Scale;
    public:
  void getempdata()
    {



    cout << "Enter employee Desiignation";
    cin >> Desiignation;
    cout << "Enter the speccialization";
    cin >> speccialization;
    cout << "Enter the pay Scale of the Employee ";
    cin >> Pay_Scale;
    }

    void putempdata()
    {
        cout << Desiignation;
        cout << speccialization;
        cout << Pay_Scale;
    }


};

class NT_Emp : public Employee
{
    long int Salary;

 public:
    void getdata()
    {
        cout<< "Enter the Salary of Employee";
        cin>> Salary;

    }
    void putempdata ()
    {

        cout << Salary;
    }

};

 int Employee :: c=0;
 float Employee :: sum=0;
int main()
{
    int i,n,m,idd,idd1,option;
    char yesno;
   class Employee b[n];
    class T_Emp e[n];
    class NT_Emp a[n];
     cout<<"enter number of  Teaching employee:";
    cin>>n;

    for(i=0; i<n; i++)
   {
       e[i].getempdata();
   }
   cout << "Enter Number of Non Teaching employee ";
   cin >> m;
   for(i=0; i<m; i++)
   {
       a[i].getdata();
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
       cout<<"Enter an Teaching employee id :";
        cin>>idd;
       for(i=0;i<9999;i++)
       {
           if(idd==a[i].getid())
           {
               b[i].outtput();
               e[i].putempdata();
           }
       }
       cout<<"Enter an Non Teaching employee id :";
        cin>>idd1;
       for(i=0;i<9999;i++)
       {
           if(idd1==a[i].getid())
           {
               b[i].outtput();
               a[i].putempdata();
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
                b[i].TSum();




            }
             Employee::AvgSum();
             b[0].PrintSum();

        }
   }
}
