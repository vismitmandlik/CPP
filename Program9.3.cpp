#include<iostream>
using namespace std;
class vehicle
{
protected:
    int avg;
public:
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class car : public vehicle;
{
    string a;
    int t;
public:
    void getdata()
    {
        cout<<"The type of fuel needed in the car(cng.petrol,deseal) but petrol and deseal are very expensive so chose cng=";
        cin>>a;
        cout<<"Number of tires in your vehicle you have=";
        cin>>t;
        cout<<"Average of the car is=";
        cin>>avg;
    }
    void putdata()
    {
        cout<<"you have fuel type="<<a;
        cout<<"Number of wheels="<<t;
    }
};
class truck : public vehicle;
{
    string
};

int main()
{


}
