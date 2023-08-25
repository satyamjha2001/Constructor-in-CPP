#include <iostream>
#include <string.h>
using namespace std;
class Customer
{
private:
    int cust_id;
    char name[20];
    char email[20];
    char mobile[10];
    Customer()
    {
        cust_id = 0;
        strcpy(name, "Satyam");
        strcpy(email, "hello123@gmail.com");
        strcpy(mobile, "0000000000");
    }
    Customer(int id, char n[], char e[], char m[])
    {
        cust_id = id;
        strcpy(name, n);
        strcpy(email, e);
        strcpy(mobile, m);
    }
};