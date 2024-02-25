#include<iostream>
#include<string.h>

using namespace std;

class String
{
    char S1[50];

public:
    void getdata()
    {
        cout<<"Enter Array String 1 : "<<endl;
        cin>>S1;
    }

    void putdata()
    {
        cout<<"\nEntered Strings :"<<S1<<endl;
    }

     String operator +(String &b)
    {
        String S2;

        strcat(S1,b.S1);
        strcpy(S2.S1,S1);
        return S2;

    }
    String operator ==(String &b)
    {
        if(strcmp(S1,b.S1)==0)
        {

            cout<<"\nEqual strings"<<endl;
        }
        else
        {
            cout<<"\nUnequal strings"<<endl;
        }
    }
    String operator +=(String b)
    {
        cout<<"String added in first string"<<strcat(S1,b.S1);
    }

};

int main()
{
    String S1,m,n,o,p,q,r,s;
    m.getdata();
    n.getdata();
    o=m+n;
    p==q;
    r+=s;

}
