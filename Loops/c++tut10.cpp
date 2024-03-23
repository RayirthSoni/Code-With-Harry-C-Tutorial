#include<iostream>
using namespace std;

int main()
{
    // Examples of loops in c++
    // 1.For loop
    // 2.While loop
    // 3.do While loop

    // **************for loop**************

    // **************Syntax --> for loop**************
    // for(initialization;condition;upgradation)
    // {
    //     loop body c++
    // }

    //**************Printing numbers till 50**************
    // for(int i=0;i<50;i++)
    // {
    //     cout<<i<<" ";
    // }

    // **************Example of infinite loop**************
    // for (int i = 0; 34 < 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    // **************while loop syntax***********
    // while(condition)
    // {
    //    c++ statements;
    // }

    // **************printing 1 to 100 using while loop**************
    // int i=1;
    // while(i<=100){
    //     cout<<i<<endl;
    //     i++
    // }

    // *******infinte while loop*******
    // int i=1;
    // while(true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    // **************do while loop syntax**************
    // do{
    //       c++ statements;
    // }while(condition);

    // **************print till 40**************
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=40);

    // **************at least once**************
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

    // **************forever**************
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(true);
    return 0;
}