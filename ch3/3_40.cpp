#include <iostream>
#include <string>
#include "cstring"

using namespace std;

int main()
{
    const size_t size = 100;
    const char ca1[] = "hello,world";
    const char ca2[] = "king huang";
    char ca[size];
    strcpy(ca,ca1);
    strcat(ca," ");
    strcat(ca,ca2);
    cout << ca << endl;
    return 0;

}
