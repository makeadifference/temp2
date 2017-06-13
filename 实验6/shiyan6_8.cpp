#include<stdafx.h>
#include<stdio.h>
#include<stdlib.>
#include<iostream>
using namespace std;
int main()
{
    char str[80];
    int i=0,j,k,spaceCount;
    cout << "请输入任意字符串\n";
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[j]=='')
            spaceCount++;
        else break;
}
if (spaceCount>0)
{
    for(k=i+spaceCount;k<strlen(str);k++)
    {
        str[k-spaceCount]= str[k];
    }
    str[k-spaceCount]=str[k];
}
} cout << str<< endl;
return 0;
}

