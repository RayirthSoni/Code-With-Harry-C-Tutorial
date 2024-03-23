// tuple
// comparison operator yahan use kar sakte hain
#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    tuple<string, int, int> t1;
    t1 = make_tuple("Ray", 20, 21);
    cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << endl;
    // get<index of what you want to print>(object name);
    return 0;
}