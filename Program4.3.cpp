#include<iostream>
#include<iomanip>
using namespace std;
inline double power(double b,int p=2)
{
    double r=1;
    //if(p>2){
    for(int i=0;i<p;i++){
        r*=b;
    }
    return r;
    }
    /*else{
            for(int j=0;j<p)
        r=b*b
    }*/

int main()
{
    int b;double a;
    cout<<"Enter base power respectively";
    cin>>a>>b;
    cout<<power(a,b);
}
