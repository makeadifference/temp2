#include<iostream>
using namespace std;
void setdata(int array[7][7]);
void outdata(int array[7][7]);
using namespace std;

int main()
{
    int array[7][7] = {0};
    setdata(array);
    outdata(array);

    return 0;
}

void setdata(int array[7][7])
{
    for(int n=0;n<7;n++)
        for(int m=0;m<7;m++)
        {
            // 上下边缘
            if(n==m)
                array[n][m] =1;
            if(m==0)
                array[n][m] =1;
            // 中间部分 --行>=3,列>1
            if(n>=2&&m>=1)
                array[n][m] = array[n-1][m-1] + array[n-1][m];
        }
            
}

void outdata(int array[7][7])
{
    for(int n=0;n<7;n++)
    {
        for(int m=0;m<7;m++)
            if(n>=m)
                cout << array[n][m] << '\t' ;
    cout << endl;
    }
}

    
