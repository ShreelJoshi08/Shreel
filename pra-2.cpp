#include <iostream>
#include<iomanip>
using namespace std;

struct employee
{

    int id;
private:
    string name;
    string Qualification;
    int experience;
    long long int contact_number;
public:
    void getdetail()
    {

        fflush(stdin);
        cout << "Enter the Employee ID :";
        cin >> id;
        cout << "Enter Employee Name :";
        getchar();
        getline(cin, name);
        cout << "Enter the Qualification :";
        getline(cin, Qualification);

        cout << "Enter Experience :";
        cin >> experience;

        cout << "Enter the Contact Number :";
        cin >> contact_number;
        fflush(stdin);
    }
    void display()
    {   cout << "----------------------------------"<<endl;
        cout.width(20);
        cout <<left<<"Employee ID"<<":"<< id << endl;
        cout.width(20);
        cout<<left<<"Employee Name"<<":"<< name<<endl;
        cout.width(20);
        cout<<left<<"Qualification"<<":"<<Qualification << endl;
        cout.width(20);
        cout<<left <<"Experience"<<":"<< experience << endl;
        cout.width(20);
        cout<<left<<"Contact Number"<<":"<< contact_number<<endl;
        cout << "----------------------------------"<<endl;
    }
};
int main()
{
    int n;

    cout << "Enter the number of Employee :";
    cin >> n;
    employee e[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Detail for "<<i+1<<"Employee"<<endl;
        e[i].getdetail();
    }
    char ch;
    int emp_id;
    do
    {
        cout << "Enter an Employee id which you want to check :"<<endl;
        cin >> emp_id;
        for (int i = 0; i < n; i++)
        {
            int flag=0;
            if (emp_id == e[i].id)
            {

                e[i].display();
                break;
            }
             if(i==n-1)
            {
                cout << ""<<endl;
                cout << "ERROR:ENTERED EMPLOYEE ID DOSE NOT EXIST"<<endl;
                cout << ""<<endl;

            }
        }
        cout<<"Press Y for another Employee detail or N to Exit:";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
}
