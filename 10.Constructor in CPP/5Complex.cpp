#include<iostream>
using namespace std;
class Complex
{
    private:
    float real,im;
    public:
    Complex(float r,float i)
    {
        real=r;
        im=i;
    }
    void showData()
    {
       cout<<"\na="<<real<<" b="<<im;
    }
};
int main() {
Complex c[5]={Complex(1,2),Complex(5,4),Complex(-2,6),Complex(6,7),Complex(5,8)};
for(int i=0;i<5;i++)
 c[i].showData();
return 0;
}