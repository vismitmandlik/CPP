#include<iostream>
#include<iomanip>
using namespace std;
void divide(int a,int b)
{
    if(a%b==0)
    {
        cout<<"It is divisible";
    }
    else
        cout<<"It is not divisible";
}
void divide(int a)
{
    int flag=0;
    for(int i=2;(i<=(a/2));i++)
    {
            if(a%i==0)
            {
                cout<<"not Prime "<<endl;

                flag = 1;
                break;
            }

    }
    if(flag ==0)
            {
                 cout<<" Prime"<<endl;

            }

}
float divide(float a,float b, float c)
{
    float g=((a+b+c)/3);
     cout<<g;
}
int main()
{
    int a,n,d;float x,y,z;
    cout<<"Enter num and den"<<endl;
    cin>>n>>d;
    divide(n,d);
    cout<<"Enter num"<<endl;
    cin>>a;
    divide(a);
    cout<<"Enter three numbs"<<endl;
    cin>>x>>y>>z;
    divide(x,y,z);
}
