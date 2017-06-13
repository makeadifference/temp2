#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int max(int[][4],int,int);
int min(int[][4],int,int);
double avg(int[][4],int,int);
double stdev(int[][4],int,int);
void output_result(int[][4],int);
int main()
{
	int score[100][4];
	int i,num;
	string course[4]={"高数","英语","C++","总分"};
	string temp;
	cout<<"输入学生人数:";cin>>num;
	cout<<"输入学生成绩(按高数、英语、C++的顺序依次输入):"<<endl;
	for(i=0;i<num;i++)
	{		cin>>score[i][0]>>score[i][1]>>score[i][2];
	score[i][3]=score[i][0]+score[i][1]+score[i][2];}
	cout<<"输出学生成绩为:"<<endl;
	cout<<"学号"<<'\t'<<"高数"<<'\t'<<"英语"<<'\t'<<"C++"<<'\t'<<"总分"<<endl;
	for(i=0;i<num;i++)
	{
		cout<<i<<'\t'<<score[i][0]<<'\t'<<score[i][1]<<'\t'<<score[i][2]<<'\t'<<score[i][3]<<endl;
	}
	for(i=0;i<4;i++)
	{
		cout<<course[i]<<"的最高成绩是"<<max(score,num,i)<<",";
		cout<<"最低成绩是"<<min(score,num,i)<<",";
		cout<<"平均成绩是"<<avg(score,num,i)<<",";
		cout<<"成绩的标准差是"<<stdev(score,num,i)<<endl;
	}
	output_result(score,num);
	return 0;
}
int max(int a[][4],int n,int t)
{
	int m=a[0][t];
	for(int i=1;i<n;i++)
		if(m<a[i][t])
			m=a[i][t];
		return m;
}
int min(int a[][4],int n,int t)
{
	int m=a[0][t];
	for(int i=1;i<n;i++)
		if(m>a[i][t])
			m=a[i][t];
		return m;
}
double avg(int a[][4],int n, int t)
{
	double m=a[0][t];
	for(int i=1;i<n;i++)
		m+=a[i][t];
	return m/n;
}
double stdev(int a[][4],int n,int t)
{
	double j,x,sum=0;
	j=avg(a,n,t);
	for(int i=0;i<n;i++)
	{
		x=a[i][t]-j;
		sum=sum+pow(x,2);
	}
	return sqrt(sum/n);
}
void output_result(int a[][4],int n)
{
	double m=max(a,n,3);
	int i,c=0;
	bool first=true;
	cout<<"总分最高为"<<m;
	for(i=0;i<n;i++)
	{	if(a[i][3]==m)
		++c;}
	cout<<",有"<<c<<"人达到最高分,他们的学号是:";
			if(first)
			{cout<<i;
			first=false;
			}
			else
			{cout<<"、"<<i;}
	cout<<endl;
	m=min(a,n,3);
	c=0;
	first=true;
	cout<<"总分最低分为"<<m;
	for(i=0;i<n;i++)
	{	if(a[i][3]==m)
		++c;}
	cout<<",有"<<c<<"人达到最低分,他们的学号是:";
			if(first)
			{cout<<i;
			first=false;
			}
			else
			{cout<<"、"<<i;}
	cout<<endl;
}




