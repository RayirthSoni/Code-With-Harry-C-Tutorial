/*
                        Public              Private             Protected
1.Protected Member      Protected           Private             Protected
2.Private Member        Private             Private             Private
3.Public Member         Public              Private             Protected


Single Inheritance
class a
{

};

class b: public a
{

};


Multiple Inheritance
class a
{

};

class b
{

};

class c : public a,public b
{
    
};


Multilevel Inheritance
class a
{

};

class b:public a
{

};

class c : public b
{

};

Hiearahial Inheritance
class a
{

};

class b:public a
{

};

class c:public a
{

};

Multilevel + Multiple
class a
{

};

class b : virtual public a
{

};

class c : virtual public b
{

};

class d : public b,public c
{

};

AMBIGUITY RESOLUTION
if there is function with same name in class derived from another class and we need to call it in function we do
base::getData();

also we do using object we do like
obj.base::getData();

*/