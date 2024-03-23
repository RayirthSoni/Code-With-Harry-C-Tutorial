// Virtual Base Class
// video 44 theory
/*
suppose class a se class b & class c inherit ho rahi hai and b & c se d
c & b mein ek variable a hai class a se dono mein & agar d ko inherit karenge b & c se tooh dono se a aa sakta hai
isliye a ek he baar aaye virtual base class use hoga
*/
#include <iostream>

using namespace std;

/*
Inheritance:
student ---> test
student ---> sports
test    ---> result
sports  ---> result
if functions in different class have same name then
we will do like in main function
c obj;
obj.a::function();
obj.b::function();
*/

class student
{
protected:
    int rollNumber;

public:
    void setData(int r)
    {
        rollNumber = r;
    }

    void getData()
    {
        cout << "Roll Number is " << rollNumber << endl;
    }
};

// public virtual bhi kar sakte hain
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setData(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void getData()
    {
        cout << "Result is " << endl
             << "Maths marks : " << maths << endl
             << "Physics marks : " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    int score;

public:
    void setData(int sc)
    {
        score = sc;
    }
    void getData()
    {
        cout << "Sports Score is " << score << endl;
    }
};

class result : public sports, public test
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        student::getData();
        test::getData();
        sports::getData();
        cout << "Your total marks is " << total << endl;
    }
};

int main()
{
    result ray;
    ray.student::setData(21);
    ray.test::setData(99.5, 98.5);
    ray.sports::setData(9);
    ray.display();
    return 0;
}