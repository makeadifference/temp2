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
	cout<<"С�鹲�ж�����ͬѧ?";cin>>num;
	cout<<endl<<"������ѧ���ɼ�:"<<endl;
	input_score();
	max_score=get_max_score();
	cout<<endl<<"��߳ɼ�Ϊ:"<<max_score<<",����"<<count(max_score)<<"�ˡ�";
	min_score=get_min_score();
	cout<<endl<<"��ͳɼ�Ϊ:"<<min_score<<",����"<<count(min_score)<<"�ˡ�";
	cout<<endl<<"ƽ���ɼ�Ϊ:"<<get_avg_score();
	cout<<endl<<"��׼ƫ��Ϊ:"<<get_stdev_score();
	cout<<endl<<"����߳ɼ���ѧ��(ѧ��)��:";
	output_index(max_score);
	cout<<endl<<"����ͳɼ���ѧ��(ѧ��)��:";
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
			cout<<"�����"<<i<<"λͬѧ�ĳɼ�:";
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
