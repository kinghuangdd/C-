#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};
    cout << "v1"<< endl;
    for(const auto &c : v1)
        cout << c << endl;
    cout << "v2"<< endl;
    for(const auto &c : v2)
        cout << c << endl;
    cout << "v3"<< endl;
    for(const auto &c : v3)
        cout << c << endl;
    cout << "v4"<< endl;
    for(const auto &c : v4)
        cout << c << endl;
    cout << "v5"<< endl;
    for(const auto &c : v5)
        cout << c << endl;
    cout << "v6"<< endl;
    for(const auto &c : v6)
        cout << c << endl;
    cout << "v7"<< endl;
    for(const auto &c : v7)
        cout << c << endl;
    return 0;
}
