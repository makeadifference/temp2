#include<iostream>
using namespace std;
struct Score
{
	char num[14];
	int cpp;
	int math;
	int english;
};
void sort1(Score [],int);
void sort2(Score [],int);
void output(Score [],int);
int main()
{
	Score score[]={
	{"201152501104",65,69,68},{"201152501114",94,89,63},
	{"201152501138",67,62,84},{"201152501204",100,65,91},
	{"201152501202",59,80,55},{"201152501115",92,84,60},
	{"201152501201",80,92,71},{"201152501145",88,56,67},
	{"201152501203",62,62,95},{"201152501140",80,60,86},
	{"201152501205",73,90,94}};
	int stunum=sizeof(score)/sizeof(score[0]);
	sort1(score,stunum);
	cout<<"按C++降序排序后:"<<endl;
	cout<<"学号\t\tC++\t数学\t英语"<<endl;
	output(score,stunum);
	sort2(score,stunum);
	cout<<"按学号升序排序后:"<<endl;
	cout<<"学号\t\tC++\t数学\t英语"<<endl;
	output(score,stunum);
	return 0;
}
void sort1(Score s[],int n)
{
	int i,j;
	Score t;
	for(j=0;j<n-2;j++)
	{
		for(i=0;i<n-j-1;i++)
			if(s[i].cpp<s[i+1].cpp)
			{
				t=s[i];
				s[i]=s[i+1];
				s[i+1]=t;
			}
	}
	return;
}
void sort2(Score s[],int n)
{
	int i,j;
	Score t;
	for(j=0;j<n-2;j++)
	{
		for(i=0;i<n-j-1;i++)
			if(strcmp(s[i].num,s[i+1].num)>0)
			{
				t=s[i];
				s[i]=s[i+1];
				s[i+1]=t;
			}
	}
	return;
}
void output(Score s[],int n)
{
	int i;
	for(i=0;i<n;i++)
		cout<<s[i].num<<'\t'<<s[i].cpp<<'\t'<<s[i].math<<'\t'<<s[i].english<<endl;
	return;
}