#include<iostream>
using namespace std;
int length(char str[]);
void output_frequency(char str[],int n);
int main()
{
	char str[]="he threw three free throws";
	cout<<"要处理的字符串为:"<<str<<endl;
	cout<<"字符串长度为:"<<length(str)<<endl;
	cout<<"字符串中个字符出现的频数为:";
	output_frequency(str,length(str));
	cout<<endl;
	return 0;
}
int length(char str[])
{
	int i,j=0;
	for(i=0;str[i]!='\0';i++)
		j++;
	return j;
}
void output_frequency(char str[],int n)
{
	int sum[255]={0},i;
	for(i=0;i<n;i++)
		sum[str[i]]++;
	for(i=0;i<255;i++)
		if(sum[i]!=0)
		{	cout<<char(i)<<"-"<<sum[i]<<" ";}
	return;
}
