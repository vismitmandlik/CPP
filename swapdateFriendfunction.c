#include <iostream>
#include <iomanip>
using namespace std;
class date
{
  int dd, mm, yyyy;

public:
  void getdata()
  {
    cout << "Enter day:";
    cin >> dd;
    cout << "enter month:";
    cin >> mm;
    cout << "enter year:";
    cin >> yyyy;
  }
  void putdate()
  {
    cout << "\ndate:" << dd << "-" << mm << "-" << yyyy;
  }
  void friend swapdate(date)
}
