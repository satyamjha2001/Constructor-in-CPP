#include <iostream>
using namespace std;
class Cuboid
{
private:
    float length, breadth, height;

public:
    Cuboid()
    {
        length = 0.0;
        breadth = 0.0;
        height = 0.0;
    }
    Cuboid(float x, float y, float z)
    {
        length = x;
        breadth = y;
        height = z;
    }
    void display()
    {
        cout << "Length = " << length << endl
             << "Breadth = " << breadth << endl
             << "Height = " << height << endl;
    }
};
int main()
{
    Cuboid c1, c2(3, 4.3, 6);
    c1.display();
    c2.display();
    return 0;
}