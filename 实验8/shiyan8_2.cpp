#include<iostream>
using namespace std;
struct Date
{
    int year;
    int month;
    int day;
};
int sum(Date);
int days(Date,Date);
int days_of_year(int);
int main()
{
    Date date1,date2;
    int day,temp;
    int Days_of_Run=366,Days_of_Pin=365;
    
    cout << "Input The first man's Birthday(year,month,day):" ;
    cin >> date1.year >> date1.month>>date1.day;
    cout << "Input The Second  man's Birthday(year,month,day):" ;
    cin >> date2.year >> date2.month>>date2.day;
    //cout << "Their birthday is differ " << days(date1,date2) << " days" << endl;
    cout << "Their birthday is differ " << days(date1,date2) << " days" << endl;
    return 0;
}

int sum(Date date)
{
    int days=0; 
    int Run[12] = {31,29,31,30,31,30,31,31,30,31,30};
    int Pin[12] = {31,28,31,30,31,30,31,31,30,31,30};
    // Run nian
    if(date.year%400==0||date.year%4==0)
    {
        if(date.month==1)
            days = date.day;
        else {
        for(int n=0;n<date.month-1;n++)
            days+=Run[n];
        days +=date.day;
        }
    }
    // Pin nian
    else 
    { 
        if(date.month==1)
            days=date.day;
        else 
        {
            for(int n=0;n<date.month-1;n++)
                days+=Pin[n];
            days+=date.day;
        }
    }
        return days;
}

int days_of_year(int year)
{
    int days;
    if(year%400==0||year%4==0)
        days=366;
    else days = 365;
    return days;
}

int days(Date date1,Date date2)
{
    int result=0,days1=0,days2=0;
    if(date1.year==date2.year)
    {   int a= sum(date1),b=sum(date2);
        result= a>b?a-b:b-a;
    } else if(date1.year!=date2.year)
    {   
        for(int n=1900;n<date1.year;n++)
           days1+=days_of_year(n);
        for(int m=1900;m<date2.year;m++)
            days2+=days_of_year(m);
        result = days1>days2?days1-days2:days2-days1;
    }

    return result;
}
