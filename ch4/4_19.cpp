#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1 ,3 ,2 ,4 ,5 ,6 ,7};
    int i[] ={1 ,2 ,3 ,4};
    int *ptr = i;
    int ival = 0;
    if(ptr != 0 && *ptr++)
        cout << *ptr <<endl;
    /*
    if(ival++ && ival)
        cout << ival << endl;
    if(vec[ival++] <= vec[ival])
        cout << vec[ival] << endl;
    */
    return 0;
}
