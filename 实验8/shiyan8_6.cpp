#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void out_score(int num);
void cin_score(int num);
void find_maxscore(int num);
void array_sort(int num);
struct Stusco
{
	char num[12];
	string name;
	int grade[4];
};
Stusco score[180];
int main()
{
	cin_score(180);
	array_sort(180);
	cout<<"排序后的成绩为:"<<endl;
	out_score(180);
	find_maxscore(30);
	system("pause");
	return 0;
}
void cin_score(int num)
{
	int j;
	ifstream infile("score.txt",ios::in);
	if(!infile)
	{
		cerr<<"open error!"<<endl;
		exit(1);
	}
	for(j=0;j<180;j++)
	{
		infile>>score[j].num>>score[j].name>>score[j].grade[0]>>score[j].grade[1]>>score[j].grade[2];
		score[j].grade[3]=score[j].grade[0]+score[j].grade[1]+score[j].grade[2];
	}
	infile.close();
}
void out_score(int num)
{
	int j;
	cout<<"学号"<<'\t'<<setiosflags(ios::left)<<'\t'<<"姓名"<<'\t'<<"C++"<<'\t'<<"高数"<<'\t'<<"英语"<<'\t'<<"总分"<<endl;
	for(j=0;j<180;j++)
	{
		cout<<score[j].num<<" "<<'\t'<<score[j].name<<"  "<<score[j].grade[0]<<'\t'<<score[j].grade[1]<<'\t'<<score[j].grade[2]<<'\t'<<score[j].grade[3]<<endl;
	}
	cout<<endl;
}
void array_sort(int num)
{
	int i,j;
	Stusco store;
	for(i=0;i<num-1;i++)
		for(j=0;j<num-i-1;j++)
		{
			if(score[j].grade[3]<=score[j+1].grade[3])
			{
				store=score[j];
				score[j]=score[j+1];
				score[j+1]=store;
			}
		}
}
void find_maxscore(int num)
{
	int i,j=0;
	cout<<"获得奖学金的同学是:"<<endl;
	for(i=1;i<=30;i++)
	{
		if(score[j].grade[1]&&score[j].grade[2]&&score[j].grade[3]>=60)
		{
			cout<<'\t'<<score[j].name;
			if(i%5==0)
				cout<<endl;
		}
		j++;
	}
}