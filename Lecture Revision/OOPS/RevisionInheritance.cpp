/*

case 1 :
Single Inheritance
class base{

};

class base:public derived{

};

case 2 :
Multiple Inheritance
class base1{

};

class base2{

};

class derived : public base1,public base2{

};

case 3 :
Hieararchy Inheritance
class base1{

};

class derived1:public base1{

};

class derived2:public base{

};

case 4 :
MultiLevel Inheritance
class base1{

};

class derived1 : public base1{

};

class derived2 : public derived1{

};

case 5 :
multiple + multilevel
class base{

};

class derived1 : virtual public base{

};

class derived2 : virtual public base{

};

class derived3 : public derived1,public derived2{

};

case 6 :
Ambiguity Relation
class name :: member function();

base1::greet();

case 7 :
ray.base1::setData();

case 8 :
constructor in derived classes

base fir derived
class derived:public base{

};

base1 fir base2 fir derived
class derived:public base1,public base2{

};

base1 fir base2 fir derived
class derived:public base1,public base2{

};

base2 fir base1 fir derived
class derived:public base1,virtual public base2
{
    derived(int a,int b,int c,int d,) : base1(a),base2(b)
    {

    }
};

case 9 :
initialisation list in constructor
test(int i,int j) : a(i),b(j) {}

case 10 :


*/