#include<iostream>

using namespace std;

class complex{
    int a;
    int b;
    public:
    complex(void){
        a=0;
        b=10;
    }
    void getData(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex c1,c2,c3;
    c1.getData();
    c2.getData();
    c3.getData();
    return 0;
}