#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    char c;
    unsigned cnt = 0;
    int i = 0;
    while(cin >> c && i< 20)
    {
        switch(c)
        {
            case'a':case'e':case'i':case'o':case'u':
            case'A':case'E':case'I':case'O':case'U':
            ++cnt;
            break;
        }
        i++;
    }
    cout << cnt << endl;
    return 0;
}
