#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1 ,3 ,2 ,4 ,5 ,6 ,7};
    int i;
    /*
    while(cin >> i)
        v.push_back(i);
        */
    auto pbeg = v.begin();
    while(pbeg != v.end() && *pbeg >= 0)
        cout << ++*pbeg << endl;
    return 0;
}
