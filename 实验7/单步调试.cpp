#include<iostream>
int main()
{
    using namespace std;
    int a=2,b=3,c[5] = { 1,2,3,4,5};
    int *p1,*p2,*p3;
    p1=&a;
    p2=&b;
    p3=c;
    p3++;
    (*p3)+=10;
    cout << a << '\t' << b << '\t' << c[1] << endl;
    cout << *p1 << '\t' << *p2<< '\t' << *p3 << endl;
    return 0;
}
