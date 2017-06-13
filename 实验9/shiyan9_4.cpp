#include<iostream>
using namespace std;
class Student {
    public:
        void set_data(string Name,string Num,int E,int M,int C); 
        void show_data();
        double average();
    private:
        string name;
        string num;
        int English;
        int Math;
        int Cpp;
};

void Student::set_data(string Name,string Num,int E,int M,int C)
{
    name = Name;
    num = Num;
    English = E;
    Math = M;
    Cpp = C;
}

void Student::show_data()
{
    cout << "英语成绩:" << English << " 数学成绩: " << Math << " C++成绩: " << Cpp 
        << endl;
}

double Student::average()
{
    return double(English+Math+Cpp)/3.0;
}

int main()
{
    Student stud;
    stud.set_data("XiaoMing","201511921531",67,76,86);
    stud.show_data();
    cout <<"平均分:" <<  stud.average() << endl;
    return 0;
}
    


