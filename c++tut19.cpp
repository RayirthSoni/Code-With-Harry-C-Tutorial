#include<iostream>
using namespace std;

// sum for 2 arguments
int sum(int x,int y)
{
    cout<<" using 2 arguments is ";
    return (x+y);
}

// sum for 3 arguments
int sum(int x,int y,int z)
{
    cout<<" using 3 arguments is ";
    return (x+y+z);
}

// volume for cube
float volume(float a)
{
    return (a*a*a);
}

// volume for cuboid
float volume(float l,float b,float h)
{
    return (l*b*h);
}

// volume for cylinder
float volume(float r,float h)
{
    return (3.14*r*r*h);
}

int main()
{
    int a,b,c;
    float cube_side,cuboid_length,cuboid_breadth,cuboid_height,cylinder_radius,cylinder_height;
    cout<<"First Number : ";
    cin>>a;
    cout<<"Second Number : ";
    cin>>b;
    cout<<"Third Number : ";
    cin>>c;
    cout<<"The sum of "<<a<<" & "<<b<<sum(a,b)<<endl;
    cout<<"The sum of "<<a<<","<<b<<" & "<<c<<sum(a,b,c)<<endl<<endl<<endl;
    cout<<"Length of cube's side is ";
    cin>>cube_side;
    cout<<"Volume of cube is "<<volume(cube_side)<<endl<<endl<<endl;
    cout<<"Length of cuboid is ";
    cin>>cuboid_length;
    cout<<"Breadth of cuboid is ";
    cin>>cuboid_breadth;
    cout<<"Height of cuboid is ";
    cin>>cuboid_height;
    cout<<"Volume of cuboid is "<<volume(cuboid_length,cuboid_breadth,cuboid_height)<<endl<<endl<<endl;
    cout<<"Radius of cylinder is ";
    cin>>cylinder_radius;
    cout<<"Height of cylinder is ";
    cin>>cylinder_height;
    cout<<"Volume of cylinder is "<<volume(cylinder_radius,cylinder_height)<<endl<<endl<<endl;

    return 0;
}