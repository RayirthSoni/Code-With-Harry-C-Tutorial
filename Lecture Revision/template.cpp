#include <iostream>

using namespace std;

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
    T dotProdcut(vector &obj)
    {
        T ans = 0;
        for (int i = 0; i < size; i++)
        {
            ans += this->ptr[i] * obj.ptr[i];
        }
        return ans;
    }

    T dotProdcut2(vector v1, vector v2)
    {
        T ans = 0;
        for (int i = 0; i < size; i++)
        {
            ans += v1.ptr[i] * v2.ptr[i];
        }
        return ans;
    }
};

int main()
{
    vector<int> v1(3);
    v1.ptr[0] = 1;
    v1.ptr[1] = 1;
    v1.ptr[2] = 1;

    vector<int> v2(3);
    v2.ptr[0] = 1;
    v2.ptr[1] = 1;
    v2.ptr[2] = 1;

    int ans=v1.dotProdcut(v2);
    cout<<ans<<endl;

    vector<float> v3(3);
    v3.ptr[0] = 5.43;
    v3.ptr[1] = 4.86;
    v3.ptr[2] = 1.92;

    vector<float> v4(3);
    v4.ptr[0] = 3.87;
    v4.ptr[1] = 7.32;
    v4.ptr[2] = 8.242;

    float ans2=v3.dotProdcut2(v3,v4);
    cout<<ans2;

    return 0;
}