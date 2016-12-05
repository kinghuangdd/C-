#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    const size_t rowcnt = 3,cowcnt = 4;
    int ia[rowcnt][cowcnt] = {{1,1,2,2},
                    {3,4,3,4},{6,6,6,6}};
    for(const int (&row)[cowcnt] : ia) //注意&row[]与（&row)[]的区别，这里row是一个绑定到4个元素的引用
                                        //所以加[].
        for(int cow : row)
            cout << cow << ' ';
    cout << endl;

    for(size_t row = 0;row < rowcnt;row++)  //row  cow 都是下标，size_t型
        for(size_t cow = 0;cow < cowcnt;cow++)
            cout << ia[row][cow] << ' ';
    cout << endl;

    for(int (*p)[cowcnt] = ia;p != ia + rowcnt;p++) //p是一个指向含有4个元素的数组的指针
                                                       //注意(*p)[4]与*p[4]的区别
        for(int *q = *p;q != *p + cowcnt;q++)   //注意：p解引用这里表示好友4个元素的数组，所以*p这里
                                                //就是一个数组名，q=*p,也就是q指向*p数组的首元素的指针
            cout << *q << ' ';
    cout << endl;
    return 0;
}
