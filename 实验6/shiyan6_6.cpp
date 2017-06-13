#include<iostream>
#include<Cmath>
using namespace std;
int score[50];
int num;
void input_score();
int get_max_score();
int get_min_score();
double get_avg_score();
double get_stdev_score();
int count(int);
void output_index(int);
int main()
{
	int max_score,min_score;
	cout<<"小组共有多少名同学?";cin>>num;
	cout<<endl<<"请输入学生成绩:"<<endl;
	input_score();
	max_score=get_max_score();
	cout<<endl<<"最高成绩为:"<<max_score<<",共有"<<count(max_score)<<"人。";
	min_score=get_min_score();
	cout<<endl<<"最低成绩为:"<<min_score<<",共有"<<count(min_score)<<"人。";
	cout<<endl<<"平均成绩为:"<<get_avg_score();
	cout<<endl<<"标准偏差为:"<<get_stdev_score();
	cout<<endl<<"获最高成绩的学生(学号)有:";
	output_index(max_score);
	cout<<endl<<"获最低成绩的学生(学号)有:";
	output_index(min_score);
	cout<<endl;
	return 0;
}
void input_score()
{
	int i;
	for(i=0;i<num;i++)
		do
		{
			cout<<"输入第"<<i<<"位同学的成绩:";
			cin>>score[i];
		}while(score[i]<0||score[i]>100);
		return;
}
int get_max_score()
{
	int i,j=-1;
	for(i=0;i<num;i++)
	{
		if(j<score[i])
			j=score[i];
	}
	return j;	
}
int get_min_score()
{
	int i,j=100;
	for(i=0;i<num;i++)
	{
		if(j>score[i])
			j=score[i];
	}
	return j;	
}
double get_avg_score()
{
	int s=0,i,j;
	for(i=0;i<num;i++)
	{
		s=s+score[i];
	}
	j=s/num;
	return j;
}
double get_stdev_score()
{
	int s=0,i,j,t;
	for(i=0;i<num;i++)
	{
		t=score[i]-get_avg_score();
		s=s+pow(t,2);
	}
	j=sqrt(s/num);
	return j;
}
int count(int s)
{
	int i,j=0;
	for(i=0;i<num;i++)
	{	if(s==score[i])
		j++;
	}
	return j;
}
void output_index(int s)
{
	int i;
	for(i=0;i<num;i++)
	{	
		if(s==score[i])
		cout<<i<<"  ";
	}
}
