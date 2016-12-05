#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct M
{
    char mem[10];
    int data;
}M;

void f()
{
    int i,j;
    i = 1;
    j = i;
}

int main()
{
    struct M *p;
    int x,y;
    cout << sizeof x + y << endl;
    cout << sizeof p->mem[4] << endl;
    cout << sizeof f() << endl;
    return 0;
}
