#include<iostream>
#include<Cmath>
using namespace std;
void input_score(int[],int);
int get_max_score(int[],int);
int get_min_score(int[],int);
double get_avg_score(int[],int);
double get_stdev_score(int[],int);
int count(int,int[],int);
void output_index(int,int[],int);
int main(void)
{
	int score[50];
	int num;
	int max_score,min_score;
	cout<<"小组共有多啊少名同学?";cin>>num;
	cout<<endl<<"请输入学生成绩:"<<endl;
	input_score(score,num);
	max_score=get_max_score(score,num);
	cout<<endl;
	cout<<"最高成绩为:"<<max_score<<",共有"<<count(max_score,score,num)<<"人。";
	min_score=get_min_score(score,num);
	cout<<endl;
	cout<<"最低成绩为:"<<min_score<<",共有"<<count(min_score,score,num)<<"人。";
	cout<<endl<<"平均成绩为:"<<get_avg_score(score,num);
	cout<<endl<<"标准差为:"<<get_stdev_score(score,num);
	cout<<endl<<"获最高成绩的学生(学号)有:";
	output_index(max_score,score,num);
	cout<<endl<<"获最低成绩的学生(学号)有:";
	output_index(min_score,score,num);
	return 0;
}
void input_score(int score[],int x)
{
	int i;
	for(i=0;i<x;i++)
	do
	{
		cout<<"请输入第"<<i<<"名同学的成绩:";cin>>score[i];
	}while(score[i]<0||score[i]>100);
	return;
}
int get_max_score(int a[],int y)
{
	int i,j=-1;
	for(i=0;i<y;i++)
	{
		if(j<a[i])
		{	j=a[i];}
	}
	return j;
}
int get_min_score(int a[],int y)
{
	int i,j=101;
	for(i=0;i<y;i++)
	{
		if(j>a[i])
		{	j=a[i];}
	}
	return j;
}
double get_avg_score(int b[],int z)
{
	int i,j,t=0;
	for(i=0;i<z;i++)
	{	
		t=t+b[i];
	}
	j=t/z;
	return j;
}
double get_stdev_score(int b[],int z)
{
	int i,j,t=0,s=0,k;
	for(i=0;i<z;i++)
	{	
		t=t+b[i];
	}
	j=t/z;
	for(i=0;i<z;i++)
	{
		k=b[i]-j;
		s=s+pow(k,2);
	}
	j=sqrt(s/z);
	return z;
}
int count(int x,int c[],int n)
{
	int i,j=0,t,s;
	for(i=0;i<n;i++)
	{
		if(x==c[i])
		{	j++;}
	}
	return j;
}
void output_index(int x,int c[],int n)
{
	int i,j,t,s;
	for(i=0;i<=n;i++)
	{
		if(x==c[i])
		{
			cout<<i<<"  ";
		}
	}
	cout<<endl;
}

		
	

