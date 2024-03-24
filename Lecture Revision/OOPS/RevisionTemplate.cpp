#include <iostream>

using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Test
{
    T1 data;
    T2 num;
    T3 value;

public:
    Test(T1 d, T2 n, T3 v) : data(d), num(n), value(v) {}
    void getData()
    {
        cout << "Data = " << data << "\nNum = " << num << endl
             << "Value = " << value << endl;
    }
};

template <class T>
class vector
{
public:
    T *ptr;
    int size;
    vector(int s) : size(s)
    {
        ptr = new T[size];
    }
    T dotProduct(vector &o)
    {
        T ans = 0;
        for (int i = 0; i < size; i++)
        {
            ans += this->ptr[i] * o.ptr[i];
        }
        return ans;
    }
};

int main()
{
    vector<int> v1(4);
    v1.ptr[0] = 4;
    v1.ptr[1] = 3;
    v1.ptr[2] = 2;
    v1.ptr[3] = 1;
    vector<int> v2(4);
    v2.ptr[0] = 1;
    v2.ptr[1] = 1;
    v2.ptr[2] = 1;
    v2.ptr[3] = 1;
    int ans = v1.dotProduct(v2);
    cout << ans << endl;
    Test<> o(2, 3.3, 'a');
    o.getData();
    Test<int, int, int> o2(2, 5, 6);
    o2.getData();
    Test<char, char, char> o3('a', 's', '2');
    o3.getData();
    return 0;
}