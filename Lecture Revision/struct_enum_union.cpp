#include<iostream>
using namespace std;

typedef struct employee{
    int eId;
    float salary;
    char favChar;
}emp;

union money{
    int rice;
    float pounds;
    char car;
};

int main(){
  
    // enum
    // enum meal{breakfast,lunch,dinner};
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    // meal a=breakfast;
    // cout<<a<<endl;
    // cout<<(a==2)<<endl;

    // union
    // union money m1;
    // m1.rice=1000;
    // cout<<"Printing m1.rice : "<<m1.rice<<endl;
    // m1.pounds=200.35;
    // cout<<"Printing m1.pounds : "<<m1.pounds<<endl;
    // m1.car='B';
    // cout<<"Printing m1.car : "<<m1.car<<endl;
    // cout<<"Now checking for previous, "<<m1.rice; // garbage value
    // cout<<sizeof(money);

    // struct
    struct employee rayirth;
    emp amit;
    rayirth.eId=1;
    rayirth.favChar='r';
    rayirth.salary=2000;
    cout<<"Eid of rayirth is "<<rayirth.eId<<endl;
    cout<<"FavChar of rayirth is "<<rayirth.favChar<<endl;
    cout<<"Salary of rayirth is "<<rayirth.salary<<endl;
    amit.eId=2;
    amit.favChar='a';
    amit.salary=1000;
    return 0;
}