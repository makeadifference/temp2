#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    char str1[100], str2[100];
    int archor1=0, archor2=0;
    cout << "enter first string" << endl;
    gets(str1);
    cout << "enter the second string" << endl;
    gets(str2);
    while(str1[archor1] !='\0')
        archor1++;
    while(str2[archor2] != '\0')
        archor2++;
    for(int n=0;n<100;n++,archor1++)
        str1[archor1] = str2[n];


    
    cout << str1 << endl;
    



    return 0;
}


