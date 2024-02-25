#include<iostream>
using namespace std;
class hospital
{
    public:
    int rno;
    string name;
    getdata()
    {
        cout<<"Enter roll no"<<endl;
        cin>>rno;
        cout<<"Enter name"<<endl;
        cin>>name;
    }
    putdata()
    {
        cout<<"roll no"<<rno;
        cout<<"name"<<name;

    }
};
class ward:public virtual hospital
{
    int wardnum;
    getdata()
    {
        cout<<"Enter ward number no"<<endl;
        cin>>wardnum;
    }
    putdata()
    {
        cout<<"Ward number no"<<wardnum<<endl;
    }
};
