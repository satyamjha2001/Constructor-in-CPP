#include <iostream>
using namespace std;
class Time
{
private:
    int hr, min, sec;

public:
    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time(int x, int y, int z)
    {
        hr = x;
        min = y;
        sec = z;
    }
};