#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    // if(age>18){
    //     cout<<"You can come to party";
    // }
    // else if(age==18){
    //     cout<<"You will get kid pass for the party";
    // }
    // else if((age<18) && (age>0)){
    //     cout<<"Can't come for party";
    // }
    // else{
    //     cout<<"You are not yet born";
    // }
    switch(age)
    {
        case 18 : 
        cout<<"You are 18"<<endl;
        break;
        case 19 :
        cout<<"You are 19"<<endl;
        break;
        case 20 :
        cout<<"You are 20"<<endl;
        break;
        case 21 :
        cout<<"You are 21"<<endl;
        break;
        case 22 :
        cout<<"You are 22"<<endl;
        break;
        case 2 :
        cout<<"You are 2"<<endl;
        break;
        case 1 :
        cout<<"You are 1"<<endl;
        default : 
        cout<<"Not a special case"<<endl;
        break;
    }
}