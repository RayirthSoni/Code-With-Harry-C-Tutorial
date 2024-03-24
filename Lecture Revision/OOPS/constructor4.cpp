#include<iostream>

using namespace std;

class complex{
    int a;
    int b;
    public:
    complex(int r=10,int i=20){
        a=r;
        b=i;
    }
    void getData(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex c1,c2(2),c3(1,1);
    c1.getData();
    c2.getData();
    c3.getData();
    return 0;
}