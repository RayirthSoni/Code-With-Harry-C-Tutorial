#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    tuple<int, float, string> t1;
    t1 = make_tuple(21, 20.5, "Rayirth");
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<2>(t1) << endl;
    return 0;
}