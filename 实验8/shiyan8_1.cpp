#include<iostream>
using namespace std;
int sum(int,int,int);
struct Date
{
    int year;
    int month;
    int day;
};
int main()
{
    Date date;
    cout << "Input year,month,day:" ;
    cin >> date.year >> date.month>>date.day;
    int days;

    days = sum(date.year,date.month,date.day);
    cout << date.month << "月"<< date.day<<"日是"<< date.year<<"年的第"
        << days<<"天." <<endl;
    return 0;
}

int sum(int year,int month,int day)
{
    int days=0; 
    int Run[12] = {31,29,31,30,31,30,31,31,30,31,30};
    int Pin[12] = {31,28,31,30,31,30,31,31,30,31,30};
    // Run nian
    if(year%400==0||year%4==0)
    {
        if(month==1)
            days = day;
        else {
        for(int n=0;n<month-1;n++)
            day+=Run[n];
        days +=day;
        }
    }
    // Pin nian
    else 
    { 
        if(month==1)
            days=day;
        else 
        {
            for(int n=0;n<month-1;n++)
                days+=Pin[n];
            days+=day;
        }
    }
        return days;
}
