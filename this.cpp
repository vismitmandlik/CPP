#include<iostream>
#include<iomanip>
using namespace std;
class x
{
//int a=10;
public:
    int a=10;

void fun(int a)
{
/*a = 100; */ this->a=a; //or (*this).a = 100;
}
};
int main()
{
x obj;
obj.fun(5);
cout<<"\nobject address"<<obj.a;
}
