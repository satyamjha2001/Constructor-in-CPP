#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    private:
    int bookid;
    char title[20];
    float price;
    public:
    Book()
    {
        bookid=0;
        strcpy(title,"no title");
        price=0.0f;
    }
    Book(int id,char t[],float p)
    {
        bookid=id;
        strcpy(title,t);
        price=p;
    }
};