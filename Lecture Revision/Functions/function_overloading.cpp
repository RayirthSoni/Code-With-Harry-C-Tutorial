#include<iostream>
using namespace std;

// sum for 2 arguments
float sum(float a,float b){
    return (a+b);
}

// sum for 3 arguments
float sum(float a,float b,float c){
    return (a+b+c);
}

// volume for cube
float volume(float a){
    return (a*a*a);
}

// volume for cuboid
float volume(float l,float b,float h){
    return (l*b*h);
}

// volume for cylinder
float volume(float r,float h){
    return (22/7*r*r*h);
}

int main(){
    float s1,s2;
    cin>>s1>>s2;
    cout<<"Sum for 2 arguments : "<<sum(s1,s2)<<endl;

    float a,b,c;
    cin>>a>>b>>c;
    cout<<"Sum for 3 arguments : "<<sum(a,b,c)<<endl<<endl;

    float cubeSide,cuboidLength,cuboidBreadth,cuboidHeight,cylinderRadius,cylinderHeight;

    cout<<"Cube\n\n";
    cout<<"Side of cube : ";
    cin>>cubeSide;
    cout<<"Volume of Cube : "<<volume(cubeSide)<<endl<<endl;

    cout<<"Cuboid\n\n";
    cout<<"Length of cuboid : ";
    cin>>cuboidLength;
    cout<<"Breadth of cuboid : ";
    cin>>cuboidBreadth;
    cout<<"Height of cuboid : ";
    cin>>cuboidHeight;
    cout<<"Volume of cuboid : "<<volume(cuboidLength,cuboidBreadth,cuboidHeight)<<endl<<endl;
    
    cout<<"Cylinder\n\n";
    cout<<"Radius of Cylinder : ";
    cin>>cylinderRadius;
    cout<<"Height of Cylinder : ";
    cin>>cylinderHeight;
    cout<<"Volume of Cylinder : "<<volume(cylinderRadius,cylinderHeight)<<endl<<endl;
    return 0;
}