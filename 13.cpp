#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Result;

class Student
 {
    string stu_id;
    string stu_name;
    int semester;
    int sum=0, total_cr;

public:
    void getdata()
    {
        cout << "stu_id ,student name , sem";
        cin >> stu_id >> stu_name >> semester;
    }
    void putdata()
    {
        cout << "Student id: " << stu_id << endl;
        cout << "Student name: " << stu_name << endl;
        cout << "Semester: " << semester << endl;
    }
    void get_result(Result &n);
    void put_result(Result &n);
};

class Result
{
    string sub_name[3], pr_grade[3], th_grade[3];
    int sub_credit[3];
    int th_marks[3], pr_marks[3];
    float sgpa;

public:
    void calculate_grades();
    friend void Student::get_result(Result &n);
    friend void Student::put_result(Result &n);
    int gp1[3], gp2[3];
};

void Student::get_result(Result &n)
{
    for (int i = 0; i < 3; i++)
        {
        cout << "Subject " << i + 1 << ": ";
        cin >> n.sub_name[i];
    }

    for (int i = 0; i < 3; i++)
        {
        cout << "\nEnter theory and practical marks of " << n.sub_name[i] << "\n";
        cout << "Theory: ";
        cin >> n.th_marks[i];
        cout << "Practical: ";
        cin >> n.pr_marks[i];
    }

    n.calculate_grades();
}

void Result::calculate_grades()
{
    for (int i = 0; i < 3; i++)
    {
        if (th_marks[i] >= 80)
            {
            th_grade[i] = "AA";
            gp1[i] = 10;
        } else if (th_marks[i] >= 73 && th_marks[i] < 80)
        {
            th_grade[i] = "AB";
            gp1[i] = 9;
        } else if (th_marks[i] >= 66 && th_marks[i] < 73)
        {
            th_grade[i] = "BB";
            gp1[i] = 8;
        } else if (th_marks[i] >= 60 && th_marks[i] < 66)
        {
            th_grade[i] = "BC";
            gp1[i] = 7;
        } else if (th_marks[i] >= 55 && th_marks[i] < 60)
        {
            th_grade[i] = "CC";
            gp1[i] = 6;
        } else if (th_marks[i] >= 50 && th_marks[i] < 55)
        {
            th_grade[i] = "CD";
            gp1[i] = 5;
        } else if (th_marks[i] >= 45 && th_marks[i] < 50)
        {
            th_grade[i] = "DD";
            gp1[i] = 4;
        } else {
            th_grade[i] = "FF";
            gp1[i] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
        {
        if (pr_marks[i] >= 80)
        {
            pr_grade[i] = "AA";
            gp2[i] = 10;
        } else if (pr_marks[i] >= 73 && pr_marks[i] < 80)

        {
            pr_grade[i] = "AB";
            gp2[i] = 9;
        } else if (pr_marks[i] >= 66 && pr_marks[i] < 73)
        {
            pr_grade[i] = "BB";
            gp2[i] = 8;
        } else if (pr_marks[i] >= 60 && pr_marks[i] < 66)
        {
            pr_grade[i] = "BC";
            gp2[i] = 7;
        } else if (pr_marks[i] >= 55 && pr_marks[i] < 60)
        {
            pr_grade[i] = "CC";
            gp2[i] = 6;
        } else if (pr_marks[i] >= 50 && pr_marks[i] < 55)
        {
            pr_grade[i] = "CD";
            gp2[i] = 5;
        } else if (pr_marks[i] >= 45 && pr_marks[i] < 50)
        {
            pr_grade[i] = "DD";
            gp2[i] = 4;
        } else {
            pr_grade[i] = "FF";
            gp2[i] = 0;
        }
    }
}


void Student::put_result(Result &n)
{
    cout << "\nEntered student details" << "\n";
    cout << "Student ID: " << stu_id << "\n";
    cout << "Student Name: " << stu_name << "\n";
    cout << "Student Semester: " << semester << "\n\n";

    cout << "\nGrades for each subject:\n";
    cout << setw(10) << left << "Subject" << setw(10) << left << "Grade Theory" << setw(10) << left << "Grade Practical" << endl;

    for (int i = 0; i < 3; i++)
        {
        cout << setw(10) << left << n.sub_name[i] << setw(10) << left << n.th_grade[i] << setw(10) << left << n.pr_grade[i] << endl;
    }

    for (int i = 0; i < 3; i++)
        {
        sum += n.gp1[i] * n.sub_credit[i] + n.gp2[i] * n.sub_credit[i];
        total_cr += n.sub_credit[i] + n.sub_credit[i];


    }
    n.sgpa=(sum /total_cr);
    cout<< "sgpa"<<n.sgpa;
}

int main()
{
    Student A;
    Result B;
    A.getdata();
    A.get_result(B);
    A.putdata();
    A.put_result(B);

    return 0;
}
