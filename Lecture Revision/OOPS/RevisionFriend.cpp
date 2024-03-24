#include <iostream>

using namespace std;

// forward declaration
class complex;
class Y;

class calculator
{
public:
    int sumRealComplex(complex, complex);
    int sumImaginaryComplex(complex, complex);
    int differenceRealComplex(complex, complex);
    int differenceImaginaryComplex(complex, complex);
};

class complex
{
    int a;
    int b;
    friend int calculator::sumImaginaryComplex(complex, complex);
    friend int calculator::sumRealComplex(complex, complex);
    friend int calculator::differenceRealComplex(complex, complex);
    friend int calculator::differenceImaginaryComplex(complex, complex);
    friend complex sumComplex(complex, complex);
    friend complex differenceComplex(complex, complex);

public:
    void setData()
    {
        cout << "Enter Real Part : ";
        cin >> a;
        cout << "Enter Imaginary Part : ";
        cin >> b;
    }
    void getData()
    {
        cout << "Complex Number = " << a << " + " << b << "i" << endl;
    }
};

class X
{
    int data;
    friend void calculateSamples(X, Y);

public:
    void setData()
    {
        cout << "Enter Data : ";
        cin >> data;
    }
    void getData()
    {
        cout << "Data = " << data << endl;
    }
};

class Y
{
    int num;
    friend void calculateSamples(X, Y);

public:
    void setNum()
    {
        cout << "Enter Num : ";
        cin >> num;
    }

    void getNum()
    {
        cout << "Num = " << num << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}

complex differenceComplex(complex o1, complex o2)
{
    complex o3;
    o3.a = o1.a - o2.a;
    o3.b = o1.b - o2.b;
    return o3;
}

int calculator::sumImaginaryComplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int calculator::sumRealComplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}

int calculator::differenceImaginaryComplex(complex o1, complex o2)
{
    return o1.b - o2.b;
}

int calculator::differenceRealComplex(complex o1, complex o2)
{
    return o1.a - o2.a;
}

void calculateSamples(X o1, Y o2)
{
    cout << "Sum of both object is " << o1.data + o2.num << endl;
    cout << "Difference of both object is " << o1.data - o2.num << endl;
    cout << "Product of both object is " << o1.data * o2.num << endl;
    cout << "Quotient of both object is " << o1.data / o2.num << endl;
    cout << "Remainder of both object is " << o1.data % o2.num << endl;
}

int main()
{
    complex c1, c2;
    calculator calc1;
    X x1;
    Y y1;

    c1.setData();
    c2.setData();
    cout << endl
         << endl;
    c1.getData();
    c2.getData();

    cout<<"Sum of Real Parts of Complex Number = "<<calc1.sumRealComplex(c1,c2)<<endl;
    cout<<"Sum of Imaginary Parts of Complex Number = "<<calc1.sumImaginaryComplex(c1,c2)<<endl;
    cout<<"Difference of Real Parts of Complex Number = "<<calc1.differenceRealComplex(c1,c2)<<endl;
    cout<<"Difference of Imaginary Parts of Complex Number = "<<calc1.differenceImaginaryComplex(c1,c2)<<endl;
    
    // sumComplex(c1,c2).getData();
    complex c3=sumComplex(c1,c2);
    c3.getData();
    // c3=differenceComplex(c1,c2).getData();
    c3=differenceComplex(c1,c2);
    c3.getData();

    x1.setData();
    y1.setNum();

    x1.getData();
    y1.getNum();

    calculateSamples(x1,y1);
    
    return 0;
}