#include <iostream>
#include <string>
#include <vector>
#include "cstring"

using namespace std;

int main()
{
    string s1 = "hello,king";
    string s2 = "hello,huang dandan";
    const char ca1[] = "hello";
    const char ca2[] = "king";

    if(s1 < s2)
        cout << "s1 < s2" << endl;
    else if(s1 >s2)
        cout << "s1 > s2" << endl;
    else
        cout << "=" << endl;

    if(strcmp(ca1,ca2) > 0)
        cout << "ca1 > ca2" << endl;

    else if(strcmp(ca1,ca2) < 0)
        cout << "ca1 < ca2" << endl;
    else
        cout << "=" << endl;
    return 0;

}
