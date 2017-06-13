#include<iostream>
using namespace std;
int fun(int x,int *pp);
int main()
{
    int a[50] ,x,n;
    cout <<"Input a Intger from keyboard:";
    cin >> x;
    n=fun(x,a);
    cout << x << "的奇因子有" << n<< "个,分别是:";
    for (int i=0;i<n;i++)
        cout << a[i] <<'\t';
    cout << endl;
    return 0;
}

int fun(int x,int *pp)
{
    int num=0;
    for(int n=1;(2*n-1)<=x;n++)
    { 
        if(x%(2*n-1)==0)
        {   num++;
            pp[num-1] = 2*n-1;
        }
    }
    return num;
}
            


    
