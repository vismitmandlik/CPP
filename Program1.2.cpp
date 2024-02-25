//made by 21ce068_VismitMandlik
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of an array : ";
    cin>>size;
    int *arr = new int[size];
    for(int j=0;j<size;j++){
    cout<<"Enter the elements of array["<<j<<"] : ";
    cin>>arr[j];
    }
    cout<<"Elements of array after adding 2 : "<<endl;
    for(int j=0;j<size;j++){
    cout<<"Elements of array["<<j<<"] : ";
    cout<<" "<<arr[j]+2<<""<<endl;
    }
    delete arr;
    cout<<"made by 21ce068_VismitMandlik";
}
