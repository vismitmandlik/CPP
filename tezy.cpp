#include<iostream>
#include<iomanip>
using namespace std;
class time
{
    int a=10,z;
    time (int z)
    {
         z=a;//return a+z;
    }
    friend ostream& operator<<(ostream& k, time& t)
    {
        k<<"added"<<t.z;
        return k;
    }

};
int main()
{
    time t(5);
    cout<<t;

}
