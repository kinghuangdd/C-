#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i;
    double d;
    d = i = 3.5;
    cout << i << d <<endl;
    i = d = 3.5;
    cout << i << d <<endl;
    if(i = 42)
        i++;
    return 0;
}
