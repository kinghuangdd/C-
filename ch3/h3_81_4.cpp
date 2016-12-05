#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sum;
    for(string s1;cin >> s1; sum += (sum.empty() ? "" : " ") + s1);
    cout << sum << endl;
    return 0;
}
