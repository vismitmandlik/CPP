#include<iostream>
using namespace std;
class time
{
  public:
      int h,m,s;
      time()
      {
        cout<<"........default constructor........"<<endl;
      }
      time(int b,int c,int d=52)
      {
       h=b;
       m=c;
       s=d;
      }
      time(time &obj)
      {
          h=obj.h;
          m=obj.m;
          s=obj.s;
      }
      ~time()
      {
          cout<<"Destructor"<<endl;
      }
      void getdata()
      {
        cout<<"Enter hour:"<<endl;
        cin>>h;
         cout<<"Enter min:"<<endl;
        cin>>m;
         cout<<"Enter sec:"<<endl;
        cin>>s;
      }
      void putdata()
      {
        cout<<h<<":"<<m<<":"<<s<<endl;
      }

};
int main()
{
    time a;
  a.getdata();
 a.putdata();
 time a1(2,20);
  cout<<"....Using parameterized constructor...."<<endl;
 a1.putdata();
 time a2(a1);
 cout<<"....Using Copy constructor...."<<endl;
 a2.putdata();
cout<<endl;
cout<<"made by 21ce068_Vismit_Mandlik";
}
