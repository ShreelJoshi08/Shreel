#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<string>
using namespace std;
class cardetail
{
    string model_name,fuel_type,transmission;
    float mileaga,tank_capacity;
    int seating,transmission_no,airbags_no;
    string airbags;

    public:
    int fuel_no;
    float showroom_price;
     void getdata()
     {

        cout<<"Enter Model name :";
        cin>>model_name;
        fflush(stdin);
        cout<<"Enter Fuel type :";
        cout<<"Enter 1 for Petrol, 2 for Diesel,3 for cng,4 for electric :\n";
        cin>>fuel_no;
        switch(fuel_no)
        {
            case 1:
            fuel_type ="Petrol";
            break;
            case 2:
            fuel_type ="Diesel";
            break;
            case 3:
            fuel_type ="CNG";
            break;
            case 4:
            fuel_type ="Electric";
            break;
            default :
            cout<<"Wrong choice";
            break;
        }
        fflush(stdin);
        cout<<"Enter showroom price(Lakhs) :";
        cin>>showroom_price;
        fflush(stdin);
        cout<<"Enter Mielage(km/L) :";
        cin>>mileaga;
        fflush(stdin);
        cout<<"Enter 1 for Manual transmission and 2 for AMT transmission :";
        cin>>transmission_no;
        switch (transmission_no)
        {
            case 1:
            transmission ="Manual";
            break;
            case 2:
            transmission ="AMT";
            break;
            default :
            cout<<"Wrong choice";
            break;
        }
        fflush(stdin);
        cout<<"Enter tank capacity(Liters) :";
        cin>>tank_capacity;
        fflush(stdin);
        cout<<"Enter seating in car :";
        cin>>seating;
        fflush(stdin);
        cout<<"For Airbags enter 1 for yes or 2 for no :";
        cin>>airbags_no;
        switch (airbags_no)
        {
            case 1:
            airbags ="Yes";
            break;
            case 2:
            airbags ="No";
            break;
            default :
            cout<<"Wrong choice";
            break;
        }
       fflush(stdin);
     }
     void format()
     {
    cout<<left<<setw(9)<<"Model"<<right<<setw(8)<<"Fuel"<<right<<setw(8)<<"Price"<<right<<setw(11)<<"Mileage"<<right<<setw(15)
    <<"Transmission"<<right<<setw(16)<<"Tank capacity"<<right<<setw(10)<<"Seating"<<right<<setw(11)<<"Airbags\n";
    cout<<right<<setw(26)<<"(Lakhs)"<<right<<setw(9)<<"(km/L)"<<right<<setw(29)<<"(Liters)"<<right<<setw(15)
    <<"Capacity\n";
     }
     void putdata()
    {

    cout<<left<<setw(9)<<model_name<<right<<setw(10)<<fuel_type<<right<<setw(5)<<showroom_price<<right<<setw(9)<<mileaga<<right
    <<setw(14)<<transmission<<right<<setw(13)<<tank_capacity<<right<<setw(14)<<seating<<right<<setw(11)<<airbags;
    }
    void carmodel()
    {
            cout<<model_name;
    }
};

int main()
{

    class cardetail e[100];

    int i,n,option,car_option,fuel_option,price_range;
    cout << "Enter no of Car :";
    cin >> n;
    for(i=1 ; i<=n ; i++)
    {
        e[i].getdata();
    }
    cout<<"WELCOME TO TATA MOTORS\n"<<"GET THE CAR DETAILS AS PER YOUR PREFERENCE\n";
    cout<<"(1)Model Name (2)Fuel Type (3)Price Range";
    cout<<"Enter your option :";
    cin>>option;
    switch(option)
    {
        case 1:
        cout <<"LIST OF TATA CARS";
        for(i=1;i<=n;i++)
        {
            cout<<"("<<i<<")";
            e[i].carmodel();
        }
        cout<<"\nCHOOSE YOUR CAR TO GET DETAILS :";
        cin>>car_option;
        for(i=1;i<=n;i++)
        {
            if(car_option==i)
            {
                e[i].putdata();
            }
        }
        case 2:
        cout<<"TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS\n";
        cout<<"(1)Petrol (2)Diesel (3)CNG (4)Electric\n";
        cout<<"ENTER YOUR FUEL PREFERENCE :";
        cin>>fuel_option;
        e[i].format();
        for(i=1;i<=n;i++)
        {
            if(fuel_option==e[i].fuel_no)
            {
                e[i].putdata();
            }
            cout<<"\n";
        }
        case 3:
        cout<<"ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LAKHS :\n";
        cin>>price_range;
        e[i].format();
        for(i=1;i<=n;i++)
        {
            if(e[i].showroom_price<=price_range)
            {
                e[i].putdata();
            }
        }

    }
}

