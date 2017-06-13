#include<iostream>
using namespace std;
class Student
{
    public:
        void set_data(int n,char *p,char s);
        void display();
    private:
        int num;
        char name[20];
        char sex;
};

void Student::set_data(int n,char *p,char s)
{
    num =n;
    strcpy(name ,p);
    sex =s;
}

void Student::display()
{
    cout << "num: " << num<< endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}

int main()
{
    Student stud1,stud2;
    stud1.set_data(1,"He",'f');
    stud2.set_data(1,"She",'m');
    stud1.display();
    stud2.display();
    return 0;
}
