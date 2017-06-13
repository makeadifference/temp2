#include<iostream>
using namespace std;
bool existthesame(int *,int ,int*,int);
int main()
{
    int a[] = {1,4,7,8};
    int b[] = { 2,5,6,9,10};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    bool flag = existthesame(a,n1,b,n2);
    if(flag ==true) cout << "There are two eqvivalent elements in the array " << endl;
        
    else cout <<  "There are no eqvivalent elements in the array " << endl;
    return 0;
}
bool existthesame(int *a,int n1,int *b,int n2)
{
    bool result;
    for(int n=0;n<n1;n++)
    {
        for(int m=0;m<n2;m++)
        {
            if(a[n]== b[m]) 
            {
                result = true;
                break;
            }
            else result = false;
            
        }
        if (result == true)
            break;
    }
    return result;
} 
    
