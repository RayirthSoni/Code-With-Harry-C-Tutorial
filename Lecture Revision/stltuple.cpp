#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    tuple<string, int, int, float> t1;
    t1 = make_tuple("Rayirth", 21, 20, 9.8);
    cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << " " << get<3>(t1);
    return 0;
}