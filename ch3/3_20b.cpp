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
    for(vector<int>::size_type ix = 0;
           ix < ivec.size()/2;ix++)
        cout << ivec[ix]+ivec[ivec.size()-1-ix] << "\t";
    return 1;
}
