#include<iostream>
#include<cstring>
using namespace std;
class media
{
protected:
    char title[50];
    float price;
public:
    media(char*s,float a)
    {
        strcpy(title,s);
        price=a;
    }
    virtual void display(){}
};
class book: public media
{
    int pages;
public:
    book(char *s,float a,int p):media(s,s)
    {
        pages =p;
    }
};
