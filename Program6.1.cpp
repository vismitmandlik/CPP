#include<iostream>
#include<iomanip>
using namespace std;
class tim
{

    int h,m,s;
    public:


    void getdata()
    {
        cout<<"Enter Hour, Minutes and seconds respectively:"<<endl;
        cin>>h>>m>>s;
    }
    void putdata()
    {
        cout<<" Hour : "<<h<<" Minutes : "<<m<<" Seconds : "<<s<<endl;
    }
    tim()
    {
        h=0;m=0;s=0;
        cout<<"It is a default constructor."<<endl;

    }
    tim(int hr,int mi, int sc=52 )
    {
        h=hr;m=mi;s=sc;
        //cout<<" Hour : "<<h<<" Minutes : "<<m<<"Seconds : "<<s<<endl;
        cout<<"It is a parameterised constructor."<<endl;
    }
    ~tim(){}
};
int main()
{

    tim t1;
    cout<<"t1's data is:"<<endl;
    t1.putdata();
    int hr,mi,sc;
    cout <<"Enter h,m,s:";
    cin>>hr>>mi>>sc;
    tim t2(hr,mi,sc);
    cout<<"t2's data is:"<<endl;
    t2.putdata();
    tim t3=t2;
    cout<<"t3's data is:"<<endl;
    t3.putdata();

}
