#include<iostream>
using namespace std;

int main()
{
    // pointer & array
    int *k,marks[]={10,20,30,40};
    k=marks;
    for(int i=0;i<4;i++){
        cout<<"Way 1, of printing addresses of array using (marks+i) : "<<(marks+i)<<endl;
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"Way 2, of printing addresses of array using (k+i) : "<<(k+i)<<endl;
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"Way 3, of printing addresses of array using &marks[i] : "<<&marks[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"Way 1, of printing values of array using *(marks+i) : "<<*(marks+i)<<endl;
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"Way 2, of printing values of array using *(k+i) : "<<*(k+i)<<endl;
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"Way 3, of printing values of array using marks[i] : "<<marks[i]<<endl;
    }

    return 0;
}