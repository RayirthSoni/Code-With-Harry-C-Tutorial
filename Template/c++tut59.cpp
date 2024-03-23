// First Template
#include <iostream>

using namespace std;

template <class T>
class vector
{
public:
    // int *ptr;
    T *ptr;
    int size;

    vector(int s) : size(s)
    {
        ptr = new T[size];
    }

    // Now doing like this we can do for int data type but for float and others it will be inconvinient so we use template
    // so that we can make it convinient for us to deal with different data types

    T dotProduct(vector &v)
    {
        T ans = 0;
        for (int i = 0; i < size; i++)
        {
            ans += this->ptr[i] * v.ptr[i];
        }
        return ans;
    }

    // int dotProduct(vector v1, vector v2)
    // {
    //     int ans = 0;
    //     for (int i = 0; i < size; i++)
    //     {
    //         ans += v1.ptr[i] * v2.ptr[i];
    //     }
    //     return ans;
    // }
};

int main()
{
    vector<float> v1(3);
    v1.ptr[0] = 5.2;
    v1.ptr[1] = 4.8;
    v1.ptr[2] = 3;
    vector<float> v2(3);
    v2.ptr[0] = 1.2;
    v2.ptr[1] = 2.8;
    v2.ptr[2] = 0.4;
    float ans=v1.dotProduct(v2);
    cout<<ans;
    // vector v3(3);
    // cout<<v3.dotProduct(v1,v2);
    return 0;
}