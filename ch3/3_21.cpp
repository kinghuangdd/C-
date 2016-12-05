#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i;
    vector<int> ivec;
    while(cin >> i)
        ivec.push_back(i);
    for(auto it = ivec.begin();
            it!=ivec.end()-1;++it)
        cout << *it+*++it <<"\t";
    cout << endl;
    return 0;

}
