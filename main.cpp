#include <iostream>
#include <vector>
#include "so/sum.h"
using namespace std;
int main()
{
    cout << sum(9, 2) << endl;
    cout << "hello cmake" << endl;
    vector<int> v;
    v.push_back(23);
    auto show = [](const vector<int> &v) {
        for (auto const &ele : v) {
            cout << ele << "  ";
        }
        cout << endl;
    };
    show(v);   
    show(v);
}