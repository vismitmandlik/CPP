#include<iostream>
using namespace std;
class shape
{
    string shapename;
public:
    void getdata()
   {
       cout << "Enter shape Name:";
       cin >> shapename;
   }
   void putdata()
   {
       cout <<" Name:"<<shapename<<endl;
   }
};
class circle:public virtual shape
{
     public:
     float radius;
     void gtdata()
     {
         cout <<"Enter radius:";
         cin >> radius;
     }
     void ptdata()
     {
         cout <<"Radius:"<<radius<<endl;
     }
};
class area:public virtual circle
{
    float area;
    public:
    /*void gt1data()
    {
        cout <<"Enter radius to get area:";
        cin >> radius;
    }*/
    void pt1data()
    {
        cout <<"Area is :" << (3.14*radius*radius)<<endl;
    }
};
int main()
{
   area p,p1,p2,p3,p4;
   p.getdata();
   p.gtdata();
   p.putdata();
   p.ptdata();
   p.pt1data();
   p1.getdata();
   p1.gtdata();
   p1.putdata();
   p1.ptdata();
   p1.pt1data();
   p2.getdata();
   p2.gtdata();
   p2.putdata();
   p2.ptdata();
   p2.pt1data();
   p3.getdata();
   p3.gtdata();
   p3.putdata();
   p3.ptdata();
   p3.pt1data();
   p4.getdata();
   p4.gtdata();
   p4.putdata();
   p4.ptdata();
   p4.pt1data();
}
