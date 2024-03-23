// Create a function which takes 2 point objects and computes distance between those 2 point objects
// Hint : Make it a friend function
#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x;
    int y;
    int z;
    friend void distancePoint(point, point);

public:
    point();

    void getData()
    {
        cout << "Point is (" << x << "," << y << "," << z << ")" << endl;
    }
};

point::point()
{
    cout << "Enter x co-ordinate : ";
    cin >> x;
    cout << "Enter y co-ordinate : ";
    cin >> y;
    cout << "Enter z co-ordinate : ";
    cin >> z;
}

void distancePoint(point o1, point o2)
{
    cout << "Distance between 2 points is : " << sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2) + pow(o2.z - o1.z, 2));
}

int main()
{
    point p1, p2;

    p1.getData();
    p2.getData();

    distancePoint(p1,p2);

    return 0;
}