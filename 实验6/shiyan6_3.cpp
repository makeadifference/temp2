#include<iostream>
#include<stdlib.h>
int main()
{
    using namespace std;
    int m;
    int d ; // D < num
    int array[20] = {0};
    cout << "输入一个数字和一个转换的进制:"<< endl;
    cin >> m>> d;
    if(m==0)
    {
        cout << '0' << endl;
        return 0;
    }
    while(m>0)
    {
        int k;
        k = m%d;
        if(k>=0&& k<16) s[i] = 'O'+k;
        else if(k>=10&&k<16) s[i] = 'A'+k-10;
        else 
        {
            cout << "超过16进制出错!" << endl;
            return 0;
        }
        m=m/d;
        i++;
    }
    i--;
    cout << "十进制的整数" << m << "对应的" << d << "进制数是:" ;
    while(i>=0)
    {
        cout << s[i];
        i--;
    }
    cout << endl;
    
    return 0;
}
    

