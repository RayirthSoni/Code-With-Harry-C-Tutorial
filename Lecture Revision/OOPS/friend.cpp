#include <iostream>

using namespace std;

/*  NOTES
here lets say hamne function likha hai class ke bahar agar usse friend declare karna ho tooh
exactly vaise he likhenge bas friend keyword aage laga denge
jaise
void swap()
agar class a mein isse friend declare karna hai tooh
friend void swap()

aur agar swap pointer ya swap reference vale hai tooh

ham aise likhte hain bahar
void swapPointer(*,*)
void swapReference(&,&)

agar isse friend declare karna hai tooh
friend void swapPointer(*,*)
friend void swapReference(&,&)

agar kisi function ko declare kiya hai bahar define karna hai tooh
void X::setData()
{

}


agar ek class mein hamne kuch function banaye hai unhe friend banana ho tooh
isse bahar aise likhenge
int calculator::sumComplex();
int calculator::differenceComplex();
agar isse kisi class mein friend banana ho tooh
friend int calculator::sumComplex();
friend int calculator::differenceComplex();


dont forget forward declaration
*/

// Forward Declaration
class complex;
class B;
class Y;
class vectr;

class calculator
{
public:
    int sumRealComplex(complex, complex);
    int sumImaginaryComplex(complex, complex);
    int differenceRealComplex(complex, complex);
    int differenceImaginaryComplex(complex, complex);
    int dotProduct(vectr, vectr);
    vectr crossProduct(vectr, vectr);
};

class complex
{
    int a, b;
    friend int calculator::sumRealComplex(complex, complex);
    friend int calculator::sumImaginaryComplex(complex, complex);
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

class vectr
{
    int a;
    int b;
    int c;
    friend int calculator::dotProduct(vectr, vectr);
    friend vectr calculator::crossProduct(vectr, vectr);

public:
    void setData()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
        cout << "Enter c : ";
        cin >> c;
    }
    void getData()
    {
        cout << "Vector = " << a << "i + " << b << "j + " << c << "k" << endl;
    }
};

class A
{
    int a;
    friend void swap(A, B);
    friend void swapPointer(A *, B *);
    friend void swapReference(A &, B &);

public:
    void setData()
    {
        cout << "Enter a : ";
        cin >> a;
    }
    void getData()
    {
        cout << "a : " << a << endl;
    }
};

class B
{
    int b;
    friend void swap(A, B);
    friend void swapPointer(A *, B *);
    friend void swapReference(A &, B &);

public:
    void setData()
    {
        cout << "Enter b : ";
        cin >> b;
    }
    void getData()
    {
        cout << "b : " << b << endl;
    }
};

class X
{
    int data;
    friend void sumObjects(X, Y);

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
    friend void sumObjects(X, Y);

public:
    void setNum()
    {
        cout << "Enter Num : ";
        cin >> num;
    }
    void getNum();
};

// FUNCTIONS FOR VECTOR

int calculator::dotProduct(vectr o1, vectr o2)
{
    return ((o1.a * o2.a) + (o1.b * o2.b) + (o1.c * o2.c));
}

vectr calculator::crossProduct(vectr o1, vectr o2)
{
    vectr v3;
    v3.a = o1.b * o2.c - o1.c * o2.b;
    v3.b = o1.c * o2.a - o1.a * o2.c;
    v3.c = o1.a * o2.b - o1.b * o2.a;
    return v3;
}

void Y::getNum()
{
    cout << "Num = " << num << endl;
}

void sumObjects(X o1, Y o2)
{
    cout << "Sum of Both Objects = " << o1.data + o2.num << endl;
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

int calculator::sumRealComplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}

int calculator::sumImaginaryComplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int calculator::differenceRealComplex(complex o1, complex o2)
{
    return o1.a - o2.a;
}

int calculator::differenceImaginaryComplex(complex o1, complex o2)
{
    return o1.b - o2.b;
}

// SWAP ALL FUNCTIONS

void swap(A o1, B o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

void swapPointer(A *o1, B *o2)
{
    int temp = o1->a;
    o1->a = o2->b;
    o2->b = temp;
}

void swapReference(A &o1, B &o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main()
{
    complex c1, c2, c3, c4;
    calculator calc1;
    c1.setData();
    c2.setData();

    c1.getData();
    c2.getData();

    c3 = sumComplex(c1, c2);
    c4 = differenceComplex(c1, c2);
    cout << "Sum of Real Parts of Complex Number = " << calc1.sumRealComplex(c1, c2) << endl;
    cout << "Difference of Real Parts of Complex Number = " << calc1.differenceRealComplex(c1, c2) << endl;
    cout << "Sum of Imaginary Parts of Complex Number = " << calc1.sumImaginaryComplex(c1, c2) << endl;
    cout << "Difference of Imaginary Parts of Complex Number = " << calc1.differenceImaginaryComplex(c1, c2) << endl;
    c3.getData();
    c4.getData();

    X x1;
    Y y1;

    x1.setData();
    y1.setNum();
    x1.getData();
    y1.getNum();

    sumObjects(x1, y1);

    A a1;
    B b1;
    a1.setData();
    b1.setData();
    a1.getData();
    b1.getData();
    swap(a1, b1);
    a1.getData();
    b1.getData();
    swapPointer(&a1, &b1);
    a1.getData();
    b1.getData();
    swapReference(a1, b1);
    a1.getData();
    b1.getData();

    vectr v1, v2;
    v1.setData();
    v2.setData();
    v1.getData();
    v2.getData();
    vectr v3;
    v3=calc1.crossProduct(v1,v2);
    cout << "Dot Product of Vectors = " << calc1.dotProduct(v1, v2) << endl;
    v3.getData();

    return 0;
}