#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    float i;
    char*p;
    long j;
    string k;
    vector<string> ivec;
    int ia[10];
    cout << sizeof(int) << " ";
    cout << sizeof(char) << " ";
    cout << sizeof i << " ";
    cout << sizeof *p << " ";
    cout << sizeof p << " ";
    cout << sizeof j << " ";
    cout << sizeof k << " ";
    cout << sizeof ivec << " ";
    cout << sizeof ia << " ";
    cout << sizeof (*ia) << " ";
    return 0;
}
