#include<iostream>
using namespace std;
class media
{
    protected:
    string t;
    float price;
    public:
    media(string s,float f)
    {
        t=s;
        price=f;
    }
    virtual void display()
    {

    }
};
class book:public media
{
    int countt;
    public:
    book(string z,float q,int m):media(z,q)
    {
        countt=m;
    }
    void display()
    {
        cout<<"book name="<<t<<endl<<"price="<<price<<endl;
        cout<<"no. of pages="<<countt<<endl;
    }
};
class tape:public media
{
    float minute;
    public:
    tape(string e,float y,float g):media(e,y)
    {
        minute=g;
    }
    void display()
    {
        cout<<"book name="<<t<<endl<<"price="<<price<<endl;
        cout<<"duration="<<minute<<endl;
    }
};
int main()
{
    media *m;
    book b("cbala",10,10);
    tape t("b.h.gardy",450.90,17.3);
    m=&b;
     m->display();
      m=&t;
       m->display();
       cout<<"This Program is made by 21CE116 Vatsal";
}
