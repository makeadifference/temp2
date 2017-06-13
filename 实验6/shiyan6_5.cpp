#include<iostream>
int main()
{
    using namespace std;
    int array[20] = { 1,2,3,4,5,6,7,8,9,10};
    cout << "请输入10个整数:" ;
    for(int n=10;n<20;n++)
        cin >> array[n];
    // 所有元素加倍
    for(int n=0;n<20;n++)
        array[n] *=2;

    cout << "加倍前:" << endl;
    for(int m=19;m>=0;m--)
    {
        cout << array[m] << '\t';
        if(m%5==0)
            cout << endl;
    }
    
    // 输出大于100的偶数
    cout << "大于100倍整数:" << endl;
    for(int x=0;x<20;x++)
        if(array[x]%2==0 && array[x] >100)
            cout << array[x] << " " ;
    return 0;
}

