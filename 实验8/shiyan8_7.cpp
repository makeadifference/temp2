#include<iostream>
#include<iomanip>
using namespace std;
struct courseInformation
{
	char name[10];
	int highestScore;
	int lowestScore;
	int sum;
	double average;
	double failureRate;
	int rank;
};
studentInformation student[10]=
{
								
	{1,"张莉莉",67,89,73,56,0,0,0,0,0,0,0},
								
	{2,"陈俊伟",89,65,73,90,0,0,0,0,0,0,0},
								
	{3,"范伟勇",78,65,73,90,0,0,0,0,0,0,0},
							
	{4,"唐金泉",68,87,35,59,0,0,0,0,0,0,0},
							
	{5,"彭天一",56,87,38,80,0,0,0,0,0,0,0},
								
	{6,"刘浩",84,49,76,90,0,0,0,0,0,0,0},
							
	{7,"吴伶",54,67,65,87,0,0,0,0,0,0,0},
							
	{8,"孙佩佩",93,74,48,78,0,0,0,0,0,0,0},
							
	{9,"沈海岩",67,87,67,89,0,0,0,0,0,0,0},
								
	{10,"唐薛延",45,56,78,98,0,0,0,0,0,0,0},
								};
courseInformation course[4]={ 
							{"数学",0,0,0,0,0,0},
							{"语文",0,0,0,0,0,0},
							{"英语",0,0,0,0,0,0},
							{"C++",0,0,0,0,0,0} 
							};
void outputStudentScore()
{
	system("cls");
	cout<<endl;
	cout<<setw(5)<<"学号"<<setw(12)<<"姓名"<<setw(8)<<"数学"<<setw(8)<<"语文"<<setw(8)<<"英语"<<setw(8)<<"C++"<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<setw(5)<<student[i].id;
		cout<<setw(12)<<student[i].name;
		for(int j=0;j<4;j++)
		{
			cout<<setw(8)<<student[i].course[j];
			cout<<endl;
		}
		cout<<"-------------------------------------------"<<endl;
		getchar();
	}
void calculateStu_Total_Average()
{
	system("cls");
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<4;j++)
		{
			student[i].sum+=student[i].course[j];
		}
		student[i].average=student.sum/4.0;
	}
	cout<<endl;
	cout<<setw(5)<<"学号"<<setw(12)<<"姓名"<<setw(8)<<"数学"<<setw(8)<<"语文"<<setw(8)<<"英语"<<setw(8)<<"C++"<<setw(8)<<"总分"<<setw(8)<<"平均分"<<endl;
	cout<<"----------------------------------------------"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<setw(5)<<student[i].id;
		cout<<setw(12)<<student[i].name;
		for(j=0;j<4;j++)
			cout<<setw(8)<<student[i].course[j];
		cout<<setw(8)<<student[i].sum<<setw(8)<<student[i].average<<endl;
	}
	cout<<"--------------------------------------------"<<endl;
	getchar();
}
void score_Highest_Lowest(int flag)
{
	system("cls");
	cout<<endl;
	int i,j;
	if(flag==0)
	{
		cout<<setw(5)<<"学号"<<setw(12)<<"姓名"<<setw(8)<<"数学"<<setw(8)<<"语文"<<setw(8)<<"英语"<<setw(8)<<"C++"<<"C++"<<setw(8)<<"最高分"<<setw(8)<<"最低分"<<endl;
		cout<<"-------------------------------------"<<endl;
		for(i=0;i<10;i++)
		{
			student[i].highestScore=student[i].course[0];
			student[i].lowestScore=student[i].course[0];
			for(j=1;j<4;j++)
			{
				if(student[i].highestScore<student[i].course[j])
					student[i].highestScore=student[i].course[j];
				if(student[i].lowestScore>student[i].course[j])
					student[i].lowestScore=student[i].course[j];
			}
			cout<<setw(5)<<student[i].id;
			cout<<setw(12)<<student[i].name;
			for(j=0;j<4;j++)
			{
				cout<<setw(8)<<student[i].course[j];
			}
			cout<<setw(8)<<student[i].highestScore<<setw(8)<<student[i].lowestScore<<endl;
		}
		cout<<"------------------------------------------------"<<endl;
	}
	else if(flag==1)
	{
		for(j=0;j<4;j++)
		{
			course[j].highestScore=student[0].course[j];
			course[j].lowestScore=student[0].course[j];
			for(i=1;i<10;i++)
			{
				if(course[j].highestScore<student[i].course[j])
					course[j].highestScore=student[i].course[j];
				if(course[j].lowestScore>student[i].course[j])
					course[j].lowestScore=student[i].course[j];
			}
		}
		cout<<setw(16)<<"课程名"<<setw(8)<<"平均分"<<setw(8)<<"最高分"<<setw(8)<<"最低分"<<endl;
		cout<<"---------------------------------"<<endl;
		for(i=0;i<4;i++)
			cout<<setw(16)<<course[i].name<<setw(8)<<course[i].average<<setw(8)<<course[i].highestScore<<setw(8)<<course[i].lowestScore<<endl;
		cout<<"------------------------------------------"<<endl;
	}
	getchar();
}
void countStu_Failed_Excellent()
{
	int i,j;
	system("cls");
	cout<<endl;
	cout<<setw(5)<<"学号"<<setw(12)<<"姓名"<<setw(8)<<"数学"<<setw(8)<<"语文"<<setw(8)<<"英语"<<setw(8)<<"C++"<<setw(11)<<"不及格门数"<<setw(9)<<"优秀门数"<<endl;
	cout<<"-------------------------------"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<setw(5)<<student[i].id;
		cout<<setw(12)<<student[i].name;
		for(j=0;j<4;j++)
		{
			cout<<setw(5)<<student[i].id;
			cout<<setw(12)<<student[i].name;
			for(j=0;j<4;j++)
			{
				cout<<setw(8)<<student[i].course[j];
			}
			for(j=0;j<4;j++)
			{
				if(student[i].course[j]<60)
					student[i].failedcount++;
				if(student[i].course[j]>=90)
					student[i].excellentcount++;
			}
			cout<<setw(11)<<student[i].failedcount<<setw(9)<<student[i].excellentcount<<endl;
		}
		cout<<"-----------------------------------------"<<endl;
		getchar();
	}
	void sort_By_Average(int flag)
	{
		system("cls");
		int i,j;
		if(flag==0)
		{
			for(j=1;i<9;i++)
			{
				for(j=1;j<10;j++)
					if(student[i].average<student[j].average)
					{
						studentInformation stutemp;
						stutemp=student[i];
						student[i]=student[j];
						student[j]=stutemp;
					}
					student[i].rank=i+1;
			}
			student[i].rank=i+1;
			cout<<endl;
			cout<<setw(5)<<"名次"<<setw(5)<<"学号"<<setw(12)<<"姓名"<<setw(8)<<"数学"<<setw(8)<<"语文"<<setw(8)<<"英语"<<setw(8)<<"C++"<<setw(8)<<"总分"<<setw(8)<<"平均分"<<endl;
			cout<<"----------------------------------"<<endl;
			for(i=0;i<10;i++)
			{
				cout<<setw(5)<<student[i].rank<<setw(5)<<student[i].id;
				cout<<setw(12)<<student[i].name;
				for(j=0;j<4;j++)
					cout<<setw(8)<<student[i].course[j];
				cout<<setw(8)<<student[i].sum<<setw(8)<<student[i].average<<endl;
			}
			cout<<"-----------------------------------------"<<endl;
		}
		else if(flag==1)
		{
			for(i=0;i<3;i++)
			{
				for(j=i+1;j<4;j++)
				{
					if(course[i].average<course[j].average)
					{
						courseInformation coursetemp;
						coursetemp=course[i];
						course[i]=course[j];
						course[j]=coursetemp;
					}
				}
				course[i].rank=i+1;
			}
			course[i].rank=i+1;
			cout<<endl;
			cout<<setw(5)<<"名次"<<setw(16)<<"课程名"<<setw(8)<<"平均分"<<endl;
			cout<<"--------------------------------"<<endl;
			for(i=0;i<4;i++)
			{
				cout<<setw(5)<<course[i].rank<<setw(16)<<course[i].name<<setw(8)<<course[i].average<<endl;
			}
			cout<<"---------------------------------"<<endl;
		}
		getchar();
	}
	void calculateCourse_Average_Failrate()
	{
		system("cls");
		int i,j;
		for(j=0;j<4;j++)
		{
			course[j].failureRate=0;
			course[j].sum=0;
			int count=0;
			for(i=0;i<10;i++)
			{
				course[j].sum+=student[i].course[j];
				if(student[i].course[j]<60)
					count++;
			}
			course[j].average=course[j].sum/10.0;
			course[j].failureRate=count/10.0;
		}
		cout<<endl;
		cout<<setw(16)<<"课程名"<<setw(8)<<"平均分"<<setw(13)<<"不及格率"<<endl;
		cout<<"--------------------------------"<<endl;
		for(i=0;i<4;i++)
		{
			cout<<setw(16)<<course[i].name<<setw(8)<<course[i].average;
			cout<<setw(12)<<course[i].failureRate*100<<'%'<<endl;
		}
		cout<<"---------------------------------"<<endl;
		getchar();
	}




























 


