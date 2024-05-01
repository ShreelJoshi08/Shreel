#include<iostream>
using namespace std;

void printline();

class Product
{
    protected:
    int product_id;
    string product_name;
    string product_manufacture;
    float product_price;
    public:
        Product(int id,string name,string manuf,float p)
        {
            product_id = id;
            product_name = name;
            product_manufacture = manuf;
            product_price = p;
        }
        virtual void putdata() = 0;
};

class smartwatch : public Product
{
    float dial_size;
    public:
        smartwatch(int id,string name,string manufacture,float price,float size) : Product(id,name,manufacture,price)
        {
            dial_size = size;
        }
        void putdata()
        {
            printline();
            cout << product_id << "  :  " << product_name << "  :  " << product_manufacture << "  :  " << product_price <<"  :  " << dial_size;
            printline();
        }
};
class bedsheet : public Product
{
    float width;
    float height;
    public:
        bedsheet(int id,string name,string manufacture,float price,float hei,float wid) : Product(id,name,manufacture,price)
        {
            width = wid;
            height = hei;
        }
        void putdata()
        {
            printline();
            cout << product_id << "  :  " << product_name << "  :  " << product_manufacture << "  :  " << product_price << "  :  " << width << "  :  " << height;
            printline();
        }
};

int main()
{
    int choise;
    char ch;
      int id;
            string name,manufacture;
            float price,width,height,size;
    do
    {
    cout << "Enter 1 : smart watch menu " << endl
         << "Enter 2 : bedsheet menu" << endl;
    cout << "Enter your choice : ";
    cin >> choise;
    switch(choise)
    {
        case 1 :

            cout <<endl<< "ENTER SMART WATCH DATA" << endl << endl;
            cout << "Enter product id : ";
            cin >> id;
            cin.ignore();
            cout << "Enter product name : ";
            getline(cin,name);
            cout << "Enter product manufacture\\: ";
            getline(cin,manufacture);
            cout << "Enter product price: ";
            cin >> price;
            cout << "Enter product dial size : ";
            cin >> size;
            Product *p;
            p = new smartwatch(id,name,manufacture,price,size);
            p -> putdata();
            break;
        case 2:
        cout << endl << "ENTER BEDSHEET DATA"<< endl;
            cout << "Enter product id : ";
            cin >> id;
            cin.ignore();
            cout << "Enter product name : ";
            getline(cin,name);
            cout << "Enter product manufacture : ";
            getline(cin,manufacture);
            cout << "Enter product price : ";
            cin >> price;
            cout << "Enter bedsheet width : ";
            cin >> width;
            cout << "Enter bedsheet heigh : ";
            cin >> height;
            Product *b;
            b = new bedsheet(id,name,manufacture,price,width,height);
            b -> putdata();
    }
    cout << "Do you want another(Y/N)? : ";
    cin >> ch;
    }while(ch=='y'||ch=='Y');
}

void printline()
{
    cout << endl;
    int i;
    for(i=0 ; i<=60 ; i++)
    {
        cout << "-";
    }
    cout << endl;
}
