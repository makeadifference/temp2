#include<iostream>
using namespace std;
void sort(int &,int &,int&);
void swap(int &,int&);
int main()
{
    int a,b,c;
   cout << "Input 3 number from keyboard" << endl;
    cin >> a>> b>>c;
   cout << "Input 3 number from keyboard" << endl;
   cout << "Before sorting them a=" << a<< " b=" << b << " c=" << c << endl;
   sort(a,b,c);
   cout << "After sorting(Ascend) them a=" << a<< " b=" << b << " c=" << c << endl;
   return 0;
}

void sort(int &a,int &b,int &c)
{
    if(a>b)
        swap(a,b);
    if(a>c)
        swap(a,c);
    if(c<b)
        swap(b,c);
}

void swap(int &a,int &b)
{
    int temp = a;
    a=b;
    b= temp;
}
    
    
     
     
