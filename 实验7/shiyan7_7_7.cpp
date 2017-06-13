#include<iostream>
#include<stdio.h>
using namespace std;
int pstrcmp(const char *,const char *);
int main()
{
    char  str1[100], str2[100];
    gets(str1);
    gets(str2);
    cout << pstrcmp(str1,str2) << endl;
    return 0;

}
int pstrcmp(const char * str1, const char * str2)
{
    int n;
    int result;
    while(str1[n]!='\0'|| str2[n]!= '\0')
    { 
        if(str1[n] == str2[n])
        result =0;
        else if(str1[n]!=str2[n]&&str1[n]==0)
        {
            result =-1;
            break;
        }
        else if (str1[n]!=str2[n]&&str2[n]==0)
        {
            result = 1;
            break;
        }
        n++;

    }
    return result;
}
            

    
