#include <iostream>

using namespace std;

int main()
{
    int sum = 0,val = 1;
    while(val <= 10)
        sum += val,++val;
    //    for(;val <= 10;sum += val,++val)
        ;
    std::cout << sum << endl;
    return 0;
}
