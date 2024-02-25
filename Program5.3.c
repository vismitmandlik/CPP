#include <iostream>
using namespace std;
class Currency
{
    int rupee;
    int paisa;
    int y;
    float x;

public:
    void enter()
    {
        cout << "Enter amount in rupee : " << endl;
        cin >> rupee;
        cout << "Enter amount in paisa : " << endl;
        cin >> paisa;
    }
    void show()
    {
        if (paisa > 100)
        {
            y = paisa / 100;
            rupee = rupee + y;
            paisa = paisa % 100;
        }
        cout << rupee << "." << paisa << endl;
    }
    Currency sum(Currency o1)
    {
        Currency o2;
        o2.rupee = rupee + o1.rupee;
        o2.paisa = paisa + o1.paisa;
        return o2;
    }
    Currency add(Currency o1, Currency o2)
    {
        Currency o3;
        o3.rupee = o1.rupee + o2.rupee;
        o3.paisa = o1.rupee + o2.paisa;
        return o3;
    }
};
int main()
{
    Currency c1, c2, c3;
    c1.enter();
    c2.enter();
    c3 = c1.sum(c2);
    cout << "Addition using with c3=c1.sum(c2)"<< endl;
    c3.show();
    c3.add(c1, c2);
    cout << "Addition using with  c3.add(c1,c2)" << endl;
    c3.show();
    return 0;
}



