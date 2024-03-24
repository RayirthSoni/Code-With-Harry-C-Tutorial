/*

constructor order b then a
class a:public b
{

};

constructor order b then c
class a : public b,public c
{

};


constructor order c b then a
class a : public b,virtual public c
{

};

EXAMPLE FOR CONSTRUCTOR IN INHERTIANCE
class base1
{
    public:
    base1(int i)
    {
        code
    }
};

class base2
{
    public:
    base2(int j)
    {
        code
    }
};

class derived : public base1,public base2
{
    public:
    derived(int a,int b,int c,int d) : base1(a),base2(b)
    {
        code
    }
};


INITIALISATION LIST IN CONSTRUCTOR
class test
{
    int d,e;
    test(int a,int b) :  d(a),e(b){}
};

*/