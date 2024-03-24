#include <iostream>
using namespace std;

class sample2;
class complex;
class B;

class A
{
    int data;
    friend void swap(A, B);
    friend void swapReference(A &, B &);
    friend void swapPointer(A *, B *);

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

class B
{
    int num;
    friend void swap(A, B);
    friend void swapReference(A &, B &);
    friend void swapPointer(A *, B *);

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

class vectr
{
    int a;
    int b;
    int c;
    friend vectr sumVector(vectr, vectr);
    friend vectr differenceVector(vectr, vectr);
    friend void sumIVector(vectr, vectr);
    friend void sumJVector(vectr, vectr);
    friend void sumKVector(vectr, vectr);
    friend void differenceIVector(vectr, vectr);
    friend void differenceJVector(vectr, vectr);
    friend void differenceKVector(vectr, vectr);

public:
    void setVectorData()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
        cout << "Enter c : ";
        cin >> c;
    }

    void getVectorData()
    {
        cout << "Vector : " << a << "i + " << b << "j + " << c << "k" << endl;
    }
};

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiplication(int a, int b)
    {
        return a * b;
    }

    void calculateRealComplex(complex, complex);
    void calculateImaginaryComplex(complex, complex);
};

class complex
{
    int a;
    int b;
    friend complex sumComplex(complex, complex);
    friend complex differenceComplex(complex, complex);
    friend void sumRealComplex(complex, complex);
    friend void sumImaginaryComplex(complex, complex);
    friend void differenceRealComplex(complex, complex);
    friend void differenceImaginaryComplex(complex, complex);
    friend void calculator::calculateRealComplex(complex, complex);
    friend void calculator::calculateImaginaryComplex(complex, complex);

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
        cout << "Complex Number : " << a << " + " << b << "i" << endl;
    }
};

class sample1
{
    int data;
    friend void addSamples(sample1, sample2);

public:
    void setSample1Data()
    {
        cout << "Enter Data : ";
        cin >> data;
    }

    void getSample1Data()
    {
        cout << "Data = " << data << endl;
    }
};

class sample2
{
    int num;
    friend void addSamples(sample1, sample2);

public:
    void setSample2Num()
    {
        cout << "Enter Num : ";
        cin >> num;
    }

    void getSample2Num()
    {
        cout << "Num = " << num << endl;
    }
};

vectr sumVector(vectr o1, vectr o2)
{
    vectr o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    o3.c = o1.c + o2.c;
    return o3;
}

vectr differenceVector(vectr o1, vectr o2)
{
    vectr o3;
    o3.a = o1.a - o2.a;
    o3.b = o1.b - o2.b;
    o3.c = o1.c - o2.c;
    return o3;
}

void sumIVector(vectr o1, vectr o2)
{
    cout << "Sum of i components : " << o1.a + o2.a << endl;
}

void sumJVector(vectr o1, vectr o2)
{
    cout << "Sum of j components : " << o1.b + o2.b << endl;
}

void sumKVector(vectr o1, vectr o2)
{
    cout << "Sum of k components : " << o1.c + o2.c << endl;
}

void differenceIVector(vectr o1, vectr o2)
{
    cout << "Difference of I components : " << o1.a - o2.a << endl;
}

void differenceJVector(vectr o1, vectr o2)
{
    cout << "Difference of J components : " << o1.b - o2.b << endl;
}

void differenceKVector(vectr o1, vectr o2)
{
    cout << "Difference of K components : " << o1.c - o2.c << endl;
}

void addSamples(sample1 o1, sample2 o2)
{
    cout << "Sum of 2 Samples : " << (o1.data + o2.num) << endl;
}

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

void sumRealComplex(complex o1, complex o2)
{
    cout << "Sum of Real Parts of Complex Numbers : " << o1.a + o2.a << endl;
}

void sumImaginaryComplex(complex o1, complex o2)
{
    cout << "Sum of Imaginary Parts of Complex Numbers : " << o1.b + o2.b << endl;
}

void differenceRealComplex(complex o1, complex o2)
{
    cout << "Difference of Real Parts of Complex Numbers : " << o1.a - o2.a << endl;
}

void differenceImaginaryComplex(complex o1, complex o2)
{
    cout << "Difference of Real Parts of Complex Numbers : " << o1.b - o2.b << endl;
}

void calculator::calculateRealComplex(complex o1, complex o2)
{
    cout << "Using calculateRealComplex function" << endl
         << "Sum of Real Parts of Complex Number : " << o1.a + o2.a << endl
         << "Difference of Real Parts of Complex Number : " << o1.a - o2.a << endl;
}

void calculator::calculateImaginaryComplex(complex o1, complex o2)
{
    cout << "Using calculateImaginaryComplex function" << endl
         << "Sum of Imaginary Parts of Complex Number : " << o1.b + o2.b << endl
         << "Difference of Imaginary Parts of Complex Number : " << o1.b - o2.b << endl;
}

void swap(A o1, B o2)
{
    int temp = o1.data;
    o1.data = o2.num;
    o2.num = temp;
}

void swapReference(A &o1, B &o2)
{
    int temp = o1.data;
    o1.data = o2.num;
    o2.num = temp;
}

void swapPointer(A *o1, B *o2)
{
    int temp = o1->data;
    o1->data = o2->num;
    o2->num = temp;
}

int main()
{
    vectr v1, v2, v3;
    sample1 s1;
    sample2 s2;
    complex c1, c2, c3;
    calculator calc;
    A a1;
    B b1;

    v1.setVectorData();
    cout << endl;
    v2.setVectorData();

    cout << endl;
    v1.getVectorData();
    cout << endl;
    v2.getVectorData();

    cout << endl;
    sumIVector(v1, v2);
    sumJVector(v1, v2);
    sumKVector(v1, v2);

    cout << endl;
    v3 = sumVector(v1, v2);
    v3.getVectorData();

    cout << endl;
    differenceIVector(v1, v2);
    differenceJVector(v1, v2);
    differenceKVector(v1, v2);

    cout << endl;
    v3 = differenceVector(v1, v2);
    v3.getVectorData();

    cout << endl;
    s1.setSample1Data();
    s1.getSample1Data();

    cout << endl;
    s2.setSample2Num();
    s2.getSample2Num();

    cout << endl;
    addSamples(s1, s2);
    cout << endl;

    c1.setData();
    cout << endl;
    c2.setData();

    cout << endl;
    c1.getData();
    cout << endl;
    c2.getData();

    cout << endl;
    sumRealComplex(c1, c2);
    sumImaginaryComplex(c1, c2);

    cout << endl;
    c3 = sumComplex(c1, c2);
    c3.getData();

    cout << endl;
    calc.calculateRealComplex(c1, c2);
    cout << endl;
    calc.calculateImaginaryComplex(c1, c2);

    cout << endl;
    a1.setData();
    b1.setNum();

    cout << endl;
    a1.getData();
    b1.getNum();

    swap(a1,b1);
    cout << "After swap function" << endl;
    a1.getData();
    b1.getNum();

    swapReference(a1,b1);
    cout << "After swapReference function" << endl;
    a1.getData();
    b1.getNum();

    swapPointer(&a1,&b1);
    cout << "After swapPointer function" << endl;
    a1.getData();
    b1.getNum();

    return 0;
}