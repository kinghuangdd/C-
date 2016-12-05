#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    unsigned long ul1 = 2,ul2 = 5;
    cout << (ul1 & ul2) << endl;
    cout << (ul1 | ul2) << endl;
    cout << (ul1 && ul2) << endl;
    cout << (ul1 || ul2) << endl;
    return 0;
}
