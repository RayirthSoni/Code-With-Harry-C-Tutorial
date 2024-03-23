#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;        // 4
    float salary;   // 4
    char favChar;   // 1
}emp;

// syntax for struct
// struct employee
// {
//      int eId;
//      float salary;
//      char favChar;
// };

// typedef is optional thing we use it to create a shortcut for the name otherwise we will have to use like
// struct employee rayirth;
// if we use typedef and create a name we can do like
// emp rayirth; rather than struct employee rayirth

// union is like struct but with better memory management
// here max memory is reserved like 4 and if we use lesser than that then memory allocated accordingly
union money
{
    int rice;       // 4
    float pounds;   // 4
    char car;       // 1
};

int main()
{
    // union money m1;
    // m1.car='5';
    // m1.pounds=55555;
    // at a time only one can be used that's why when we tried printing m1.car we got garbage value but we will get answer if we print
    // pounds. only one can be printed because memory is being shared by all here
    // cout<<m1.pounds<<endl;


    // struct employee ray;
    // emp rohit;
    // ray.eId=1;
    // ray.favChar='r';
    // ray.salary=250000;
    // cout<<"eId for ray is : "<<ray.eId<<endl;
    // cout<<"favChar for ray is : "<<ray.favChar<<endl;
    // cout<<"salary for ray is : "<<ray.salary<<endl;
    // rohit.eId=2;
    // rohit.favChar='o';
    // rohit.salary=444444;
    // cout<<"eId for rohit is : "<<rohit.eId<<endl;
    // cout<<"favChar for rohit is : "<<rohit.favChar<<endl;
    // cout<<"salary for rohit is : "<<rohit.salary<<endl;

    //cout<<"**************************************************************************************************************************************************************"<<endl<<endl;
    // cout<<"Size of struct using sizeof operator : "<<sizeof(ray)<<endl;
    // cout<<"Size of union using sizeof operator : "<<sizeof(m1)<<endl<<endl;
    // cout<<"**************************************************************************************************************************************************************"<<endl;


    enum meal{breakfast,lunch,dinner};
    meal m1 = lunch;
    cout<<(m1==1)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;


    return 0;
}