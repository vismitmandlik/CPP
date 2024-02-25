#include<iostream>
using namespace std;
int& tonLarge(int& a,int& b){
    if(a>b){
        a=100;
        cout<<endl<<"num a is "<<a;
        cout<<endl<<"num b is ";
        return b;
    }
    else{
        b=100;
        cout<<endl<<"num a is "<<a;
        cout<<endl<<"num b is ";
        return b;
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<tonLarge(a,b);
}
