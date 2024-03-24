#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    complex(int r,int i){
        a=r;
        b=i;
    }
    void getData(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex c1(3,4),c2(10,20);
    c1.getData();
    c2.getData();
    return 0;
}