#include<iostream>
using namespace std;
int length(char str[]);
void output_frequency(char str[],int n);
int main()
{
	char str[]="he threw three free throws";
	cout<<"Ҫ������ַ���Ϊ:"<<str<<endl;
	cout<<"�ַ�������Ϊ:"<<length(str)<<endl;
	cout<<"�ַ����и��ַ����ֵ�Ƶ��Ϊ:";
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
