#include<iostream>
using namespace std;
void swap(int *,int *);
int main()
{
    int a,b;

    cout << "'a' and 'b' in ordered" << endl;
    cin >> a>>b;
    cout <<"before exchanging:a=" << a << " b=" << b << endl;
    swap(&a,&b);
    cout <<"after exchanging:a=" << a << " b=" << b << endl;
    return 0;
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

