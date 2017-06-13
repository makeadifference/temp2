#include<iostream>
struct Date {
    int year;
    int month;
};
struct Person {
    char name[20];
    struct Date birth;
    char award[20];
    float money;
    float salary;
}p = {"李莉",{1996,10},"国家奖学金" , 80,0};
int main()
{
    using namespace std;
    float num;
    cout << p.name << ","<< p.award
        << "基本工资: "<< p.money << endl << "请输入奖金额: " ;
    cin >> num;
    p.salary= p.money+num;
    cout << p.name << ",年龄"<< 2014-p.birth.year;
    cout << ",应领"<< p.salary<<"元"<< endl;
    return 0;
}
