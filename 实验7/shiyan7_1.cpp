#include<iostream>
int main()
{
    using namespace std;
    int *p1 ,*p2,a,b,t;
    cin >> a>> b;
    p1 = &a;
    p2 = &b;

    t = *p1;
    *p1=*p2;
    *p2=t;

    cout << "max=" << a << "  min" << b << endl;
    return 0;
}

