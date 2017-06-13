#include<iostream>
using namespace std;
class StudentClass 
{
private: 
	studentInformation student[10];
	courseInformation course[4];
 public: 
	StudentClass(); 
	void outputStudentScore(); 
	void calculateStu_Total_Average();	 
	void score_Highest_Lowest(int flag); 
	void countStu_Failed_Excellent();  
	void sort_By_Average(int flag);
	void calculateCourse_Average_Failrate(); 
};

StudentClass stu;
StudentClass::StudentClass( )  
{ 
	int i,j; 
	srand(time(NULL)); 
	for(i=0;i<10;i++) 
		student[i].id=i+1;  
	strcpy(student[0].name,"������"); 
	strcpy(student[1].name,"�¿�ΰ"); 
	strcpy(student[2].name,"��ΰ��"); 
	strcpy(student[3].name,"�ƽ�Ȫ"); 
	strcpy(student[4].name,"����һ"); 
	strcpy(student[5].name,"����"); 
	strcpy(student[6].name,"����"); 
	strcpy(student[7].name,"������"); 
	strcpy(student[8].name,"����"); 
	strcpy(student[9].name,"��Ѧ��"); 
	for(i=0;i<10;i++)    
	{  
		for(j=0;j<4;j++) 
			student[i].course[j]=rand(  )%61+40;    
		//������� 40~100 ֮������ } 
		for(i=0;i<10;i++) 
		{ 
			student[i].average=0; 
			student[i].excellentcount=0; 
			student[i].failedcount=0; 
			student[i].highestScore=0; 
			student[i].lowestScore=0; 
			student[i].rank=0; student[i].sum=0; 
		} 
		strcpy(course[0].name,"math"); 
		strcpy(course[1].name,"chinese"); 
		strcpy(course[2].name,"english"); 
		trcpy(course[3].name,"c++"); 
		for(i=0;i<4;i++) 
		{ 
			course[i].average=0; 
			course[i].failureRate=0;  
			course[i].highestScore=0; 
			course[i].lowestScore=0; 
			course[i].rank=0; 
			course[i].sum=0; 
		} 
}
void StudentClass::calculateStu_Total_Average() //case 3:  ����ѧ���ֺܷ�ƽ���� 
{ 
	system("cls");  
	int i,j; 
	for(i=0;i<10;i++)  
	{ 
		for(j=0;j<4;j++) 
		{ 
			student[i].sum+=student[i].course[j]; 
		} 
		student[i].average=student[i].sum/4.0;  
	} 
	cout<<endl; 
	cout<<setw(5)<<"ѧ��"<<setw(12)<<"����"<<setw(8)<<"��ѧ"<<setw(8)<<"����" <<setw(8)<<" Ӣ��"<<setw(8)<<"C++"<<setw(8)<<" �ܷ�"<<setw(8)<<" ƽ����<<endl; 
	cout<<"----------------------------------------------------------------------"<<endl; 
	for(i=0;i<10;i++) 
	{ 
		cout<<setw(5)<<student[i].id;  
		cout<<setw(12)<<student[i].name; 
		for(j=0;j<4;j++) 
			cout<<setw(8)<<student[i].course[j]; 
		cout<<setw(8)<<student[i].sum<<setw(8)<<student[i].average<<endl; 
	} 
	cout<<"----------------------------------------------------------------------"<<endl; 
	getchar( ); 
}  