#include<iostream>
using namespace std;

int main()
{
    // Arrays

    // *****Way 1 of declaring array*****
    // int marks[4]={10,20,30,40};
    // cout<<"First Way of declaring and printing elements in array"<<endl;
    // cout<<"Way 1 of printing elements in array,element 0 : "<<marks[0]<<endl;
    // cout<<"Way 1 of printing elements in array,element 1 : "<<marks[1]<<endl;
    // cout<<"Way 1 of printing elements in array,element 2 : "<<marks[2]<<endl;
    // cout<<"Way 1 of printing elements in array,element 3 : "<<marks[3]<<endl;

    // *****Way 2 of declaring array*****
    // int mark[4];
    // mark[0]=50;
    // mark[1]=60;
    // mark[2]=70;
    // mark[3]=80;

    // changing value of array
    // mark[1]=1000;
    // cout<<"Second Way of declaring and printing elements in array"<<endl;
    // cout<<"Way 2 of printing elements in array, element 0 : "<<mark[0]<<endl;
    // cout<<"Way 2 of printing elements in array, element 1 : "<<mark[1]<<endl;
    // cout<<"Way 2 of printing elements in array, element 2 : "<<mark[2]<<endl;
    // cout<<"Way 2 of printing elements in array, element 3 : "<<mark[3]<<endl;

    // *****Way 3 of declaring array using for loops*****
    // int mathMarks[4];
    // cout<<"USING FOR LOOP"<<endl;
    // for(int i=0;i<4;i++){
    //     cout<<"Way 3 of declaring array,write value of "<<i<<" element : ";
    //     cin>>mathMarks[i];
    // }
    // for(int i=0;i<4;i++){
    //     cout<<"Way 3 of printing elements in array ,element "<<i<<" : "<<mathMarks[i]<<endl;
    // }

    // *****Way 3 of declaring array using while loop*****
    // int scienceMarks[4];
    // cout<<"USING WHILE LOOP"<<endl;
    // int i=0;
    // while(i<4){
    //     cin>>scienceMarks[i];
    //     i++;
    // }
    // i=0;
    // while(i<4){
    //     cout<<scienceMarks[i]<<endl;
    //     i++;
    // }

    // *****Way 3 of declaring array using do while loop***** 
    // int maks[4];
    // int i=0;
    // do{
    //     cin>>maks[i];
    //     i++;
    // }while(i<4);
    // int j=0;
    // do{
    //     cout<<maks[j]<<endl;
    //     j++;
    // }while(j<4);

    // Pointers & Array
    int marks[]={10,20,30,40},i;
    int *k=marks;
    cout<<"PRINTING ADDRESS WITHOUT USING POINTER VARIABLE"<<endl;
    cout<<"WAY 1"<<endl;
    for(i=0;i<4;i++){
        cout<<"Address of marks[i], using (marks+i) for "<<i<<" is "<<(marks+i)<<endl;
    }
    cout<<endl<<endl;
    cout<<"WAY 2"<<endl;
    for(i=0;i<4;i++){
        cout<<"Address of marks[i], using &marks[i] for "<<i<<" is "<<&marks[i]<<endl;
    }
    cout<<endl<<endl;
    cout<<"PRINTING ADDRESS WITH POINTER VARIABLE"<<endl;
    cout<<"WAY 1"<<endl;
    for(i=0;i<4;i++){
        cout<<"Address of marks[i], using (p+i) for "<<i<<" is "<<(k+i)<<endl;
    }

    cout<<endl<<"PRINTING VALUE STORED IN ARRAY"<<endl;
    cout<<"WAY 1"<<endl;
    for(i=0;i<4;i++){
        cout<<"Value of marks[i], using *(marks+i) for "<<i<<" is "<<*(marks+i)<<endl;
    }
    cout<<endl<<endl;
    cout<<"WAY 2"<<endl;
    for(i=0;i<4;i++){
        cout<<"Value of marks[i], using marks[i] for "<<i<<" is "<<marks[i]<<endl;
    }
    cout<<endl<<endl;
    cout<<"PRINTING VALUE USING POINTER VARIABLE"<<endl;
    cout<<"WAY 1"<<endl;
    for(i=0;i<4;i++){
        cout<<"Value of marks[i], using *(p+i) for "<<i<<" is "<<*(k+i)<<endl;
    }
    cout<<endl<<endl;

    return 0;
}