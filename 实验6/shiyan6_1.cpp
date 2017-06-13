#include<iostream>
int main()
{
    using namespace std;
    int array[20] = {0,1};
    // 填充
    for(int n=2;n<20;n++)
        array[n] = array[n-1] + array[n-2];
    // 输出
    for(int n=19;n>=0;n--)
    {
        cout << array[n] << '\t';
        if(n%5==0)
            cout << endl;
    }
    return 0;
}

    

