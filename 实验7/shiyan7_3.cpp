#include<iostream>
const int N=8;
int main()
{
    using namespace std;

    int a[N],*p,*q;
    for(p=a;p<a+N;p++)
        cin >> *p;

    p=a;
    q=a+N-1;
    while(p<q)
    {
        int r=*p;
        *p = *q;
        *q=r;
        q--;
        p++;
    }

    for(p=a;p<a+N;p++)
        cout << *p << ' ' ;
    cout << endl;

    return 0;
}
