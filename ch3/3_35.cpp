#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int ia[] = {1,2,4,56,78,9,10,7,9,54,3};
    int *beg = ia, *last= ia+11;//或用begin（）和end（）函数
    while(beg < last)
    {
        *beg = 0;
        beg++;
    }
    for(const auto &i : ia)
        cout << i << endl;
    return 0;
}
