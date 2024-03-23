#include <iostream>
using namespace std;

class point
{
    int x;
    int y;
    int z;

public:
    point(int a, int b, int c) // constructor declared and defined here
    {
        x = a;
        y = b;
        z = c;
    }

    void getPoint()
    {
        cout << "Point is (" << x << "," << y << "," << z << ")" << endl;
    }
};

int main()
{
    point p1(2, 3, 4);
    point p2 = point(5, 3, 2);

    p1.getPoint();
    p2.getPoint();
    
    return 0;
}