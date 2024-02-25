#include<iostream>
#include<iomanip>
using namespace std;
class date{
    public:
    int dd, mm, yyyy;
    friend void swapdates(date &o1,date&o2);
    void getdata()
    {
        cout<<"Date"<<endl;cin>>dd;cout<<"Month"<<endl;cin>>mm;cout<<"Year"<<endl;cin>>yyyy;
    }
    void putdata()
    {
        cout<<dd<<endl;
        cout<<mm<<endl;
        cout<<yyyy<<endl;
    }
};
void swapdates(date &o1,date &o2)
{
    date temp = o1;
    o1=o2;
    o2=temp;



}
int main()
{
    date c1,c2;
    c1.getdata();
    c2.getdata();
    swapdates(c1,c2);
    c1.putdata();
    c2.putdata();

}
