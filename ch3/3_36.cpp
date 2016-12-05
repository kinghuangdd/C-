#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int ia[] = {1,2,3,4},ib[] = {1,2,3,4};
    cout << sizeof(ia) << sizeof(ib)<< endl;
    if(sizeof(ia) != sizeof(ib))
        cout << "no" <<endl;
    else{
        bool found = true;
        for(size_t i =0;i < sizeof(ia);i++)
            if(ia[i] != ib[i]){
                found = false;
                break;
            }
        if(found)
            cout << "yes" << endl;
        else if(!found)
            cout << "no" << endl;
    }

    vector<string> svec1(10,"yi");
    vector<string> svec2(10,"ya");
    if(svec1 != svec2)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
    return 0;
}
