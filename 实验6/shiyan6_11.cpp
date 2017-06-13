#include<iostream>
using namespace std;
int main()
{
    int array[5][4] = { {1,2},
                        {3,4},
                        {5,6},
                        {7,8},
                        {9,10} };
    cout << "输入10个整数:" << endl;
    for(int n=0;n<5;n++)
        for(int m=2;m<4;m++)
            cin >> array[n][m];
    
    // 乘3
    cout << "现在将所有元素乘以3" << endl;
    for(int n=0;n<5;n++)
        for(int m=0;n<4;n++)
            array[n][m] *= 3;

    cout << "数组中的值为:" << endl;
    for(int n=0;n<5;n++)
    { 
        cout << "第" << n << "行: " ;
        for(int m=0;m<4;m++)
            cout << array[n][m] << '\t';
        cout << endl;
    }

    cout <<"行序优先输出:" << endl;
    for(int n=0;n<5;n++)
    {
        cout << "第" << n << "行:";
        for(int m=0;m<4;m++)
            cout << array[n][m] << '\t';
        cout << endl;
    }
        
    cout << "列序优先输出:" << endl;
    for(int n=0;n<4;n++)
    {
        cout << "第" << n << "列: ";
        for(int m=0;m<5;m++)
            cout << array[m][n] <<'\t';
        cout << endl;
    }

    cout << "倒着输出:" << endl;

    cout <<"行序优先输出:" << endl;
    for(int n=4;n>=0;n--)
    {
        cout << "第" << n << "行:";
        for(int m=3;m>=0;m--)
            cout << array[n][m] << '\t';
        cout << endl;
    }
        
    cout << "列序优先输出:" << endl;
    for(int n=3;n>=0;n--)
    {
        cout << "第" << n << "列: ";
        for(int m=4;m>=0;m--)
            cout << array[m][n] <<'\t';
        cout << endl;
    }


    cout << "数组中的偶数:" << endl;
    for(int n=0;n<5;n++)
        for(int m=0;m<4;m++)
            if(array[n][m] %2==0)
                cout << "a[" << n<< "][" << m << "]" << array[n][m] << endl;

    cout << "行列下标之和为3的倍数的元素:" << endl;
    for(int n=0;n<5;n++)
        for(int m=0;m<4;m++)
            if((n+m)%3==0)
                cout << "a[" << n << "][" << m << "]=" << array[n][m] << endl;
    

    return 0;
}


