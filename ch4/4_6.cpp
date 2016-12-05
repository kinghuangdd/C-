#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i;
	cin >> i;
	if (i == 0)
		continue;
    while(cin >> i)
    {
		if (i == 42)
			break;
		else
			cin >> i;
			if(i == 0)
				continue;
    }
	return 0;
}

