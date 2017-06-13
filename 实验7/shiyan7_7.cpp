#include<iostream>
#include<stdio.h>
using namespace std;
int pstrlen(char *);
int main()
{
    char  str[100];
    gets(str);
    cout << pstrlen(str);
    return 0;

}

int pstrlen(char * str)
{
    int n=0;
    int len;
    while(str[n]!='\0')
        len++,n++;
    return len;
}
    
