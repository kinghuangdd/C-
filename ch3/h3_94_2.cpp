#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string word;
    vector<string> svec;
    while(cin >> word)
         svec.push_back(word);
    for(auto &str : svec)
    {
        for(auto &c : str)
            c = toupper(c);
        cout << str << " ";
    }
    cout << endl;
    return 0;
}
