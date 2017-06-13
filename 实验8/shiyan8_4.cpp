#include<iostream>
#include<stdio.h>
struct Grade {
    int E;
    int C;
    int M;
};
struct Student {
    char num[12];
    char name[10];
    struct Grade grade;
    int score;
    float average;
};
const int N=5;
int main()
{
    using namespace std;
    Student stu[N];
    cout << "请依次输入"<< N<< "个学生的学号，姓名,C++,数学和英语的成绩"<< endl;
    for(int n=0;n<N;n++)
    {
        cin >>stu[n].num>> stu[n].name;
        cin >> stu[n].grade.C >> stu[n].grade.M >>stu[n].grade.E; 
        stu[n].average = (float)(stu[n].grade.C+stu[n].grade.M+stu[n].grade.E)/3.0;
        stu[n].score =stu[n].grade.C + stu[n].grade.M + stu[n].grade.E;
    }

        cout << "学号" << '\t'<< "姓名" << '\t' << "总分" << '\t' << "均分" << endl;
        for(int n=0;n<N;n++)
        cout << stu[n].num <<'\t'<< stu[n].name<< '\t'<<stu[n].score<< '\t'<< stu[n].average<<endl; 

    return 0;

}
