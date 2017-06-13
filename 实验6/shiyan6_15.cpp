#include<iostream>
#include<string>
using namespace std;
int max(int[][4],int,int);
int min(int[][4],int,int);
void output_result(int [][4],string name[],int);
int main()
{
	int score[100][4];
	string name[100];
	int i,j,num;
	cout<<"输入学生人数:";cin>>num;
	cout<<"输入学生成绩<按姓名、高数、英语、C++的顺序依次输入>:"<<endl;
	for(i=0;i<num;i++)
	{
		cin>>name[i]>>score[i][0]>>score[i][1]>>score[i][2];
		score[i][3]=score[i][0]+score[i][1]+score[i][2];
	}
	cout<<"输入的学生成绩为:"<<endl;
	cout<<"学号"<<'\t'<<"姓名"<<'\t'<<"高数"<<'\t'<<"英语"<<'\t'<<"C++"<<'\t'<<"总分"<<endl;
	for(i=0;i<num;i++)
	{
		cout<<i<<'\t'<<name[i]<<'\t';
		cout<<score[i][0]<<'\t'<<score[i][1]<<'\t'<<score[i][2]<<'\t'<<score[i][3];
		cout<<endl;
	}
	output_result(score,name,num);
	return 0;
}
int max(int a[][4],int n,int j)
{
	int i;
	int s=a[0][j];
	for(i=0;i<n;i++)
	{
		if(s<a[i][j])
			s=a[i][j];
	}
	return s;
}
int min(int a[][4],int n,int j)
{
	int i;
	int s=a[0][j];
	for(i=0;i<n;i++)
	{
		if(s>a[i][j])
			s=a[i][j];
	}
	return s;
}
void output_result(int a[][4],string name[],int n)
{
	int m=max(a,n,3);
	int i,c=0;
	bool first=true;
	cout<<"总分最高为"<<m;
	for(i=0;i<n;i++)
	{
		if(a[i][3]==m)
			c++;
	}
	cout<<",有"<<c<<"人达到最高分,他们的姓名是:";
	for(i=0;i<n;i++)
	{
		if(a[i][3]==m)
			if(first)
			{
				cout<<name[i];
				first=false;
			}
			else
			{
				cout<<"、"<<name[i];
			}
	}
	cout<<endl;
	m=min(a,n,3);
	c=0;
	first=true;
	cout<<"总分最低为"<<m;
	for(i=0;i<n;i++)
	{
		if(a[i][3]==m)
			c++;
	}
	cout<<",有"<<c<<"人达到最低分,他们的姓名是:";
	for(i=0;i<n;i++)
	{
		if(a[i][3]==m)
			if(first)
			{
				cout<<name[i];
				first=false;
			}
			else
			{
				cout<<"、"<<name[i];
			}
	}
	cout<<endl;
}
