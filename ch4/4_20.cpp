#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string word;
    vector<string> svec{"huang","dan","hei","come on"};
    vector<string>::iterator iter;
    /*
    while(cin >> word)
        svec.push_back(word);
        */
    iter = svec.begin();
    iter++->empty();
    cout << *iter <<endl;
    return 0;
}
