#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int x = 1,y = 1;
    int sv = 3;
    sv ? ++x, ++y : --x,--y;
    cout << x << y << endl;
    return 0;
}
