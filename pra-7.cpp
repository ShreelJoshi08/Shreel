#include <iostream>
using namespace std;
class ABC
{
    int R1, I1;
    char choice;

public:
    void getdata()
    {
        cout << "Enter real part: ";
        cin >> R1;
        cout << "Enter imaginary part: ";
        cin >> I1;
    }
    void putdata()
    {
        cout << R1 << "+" << I1 << "i" << endl;
    }
    ABC operator+(ABC &n)
    {
        ABC temp;
        temp.R1 = R1 + n.R1;
        temp.I1 = I1 + n.I1;
        return temp;
    }

    ABC operator-(ABC &n)
    {
        ABC temp;
        temp.R1 = R1 - n.R1;
        temp.I1 = I1 - n.I1;
        return temp;
    }
    ABC operator*(ABC &n)
    {
        ABC temp;
        temp.R1 = (R1 * n.R1) - (R1 * n.I1);
        temp.I1 = (R1 * n.I1) + (I1 * n.R1);
        return temp;
    }
};
int main()
{
    ABC a, b, c;
    char choice;
    a.getdata();
    b.getdata();
    cout << "Choose operation" << endl
         << "(+) addition" << endl
         << "(-) subtraction" << endl
         << "(*) multiplication" << endl
         << "(/) division" << endl
         << "(!) Negation";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case '+':
    {
        c = a + b;
        c.putdata();
    }
    break;
    case '-':
    {
        c = a - b;
        c.putdata();
    }
    break;
    case '*':
    {
        c = a - b;
        c.putdata();
    }
    break;
    case '/':
    {
        c = a - b;
        c.putdata();
    }
    break;
    case '!':
    {
        c = a - b;
        c.putdata();
    }
    break;
    default:
    {
        cout << "Enter the valid operator";
    }
    }

return 0;
}
