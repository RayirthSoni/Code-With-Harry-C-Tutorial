#include<iostream>

using namespace std;

class complex{
    int a;
    int b;
    public:
    complex(){}
    complex(int r){
        a=r;
    }
    complex(int r,int i){
        a=r;
        b=i;
    }
    complex(complex &o){
        a=o.a;
        b=o.b;
    }
    void getData(){
        cout<<"Complex Number = "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex c1;
    c1.getData();
    complex c2(10);
    c2.getData();
    complex c3(29,32);
    c3.getData();
    complex c4(c3);
    c4.getData();
    return 0;
}