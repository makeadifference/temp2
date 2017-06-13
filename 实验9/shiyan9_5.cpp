#include<iostream>
using namespace std;
class CDate {
    public:
        void set_date(int Year,int Month,int Day);
        void format_output();
        void next_day();
        void check_day();
    private:
        int year;
        int month;
        int day;
};

void CDate::next_day()
{
    int Run[12] = {31,29,31,30,31,30,31,31,30,31,30};
    int Ping[12] = {31,28,31,30,31,30,31,31,30,31,30};
    day++;
    if(year%400==0||(year%4==0&&year%100!=0))
    {
       if(day>Run[month-1])
       {
           day=1;
           month++;
       }
       if(month>12)
       {
           month =1;
           year++;
       }
    } else {
       if(day>Ping[month-1])
       {
           day=1;
           month++;
       }
       if(month>12)
       {
           month =1;
           year++;
       }
    }
}


void CDate::set_date(int Year,int Month,int Day)
{
    year = Year;
    month = Month;
    day = Day;
}

void CDate::format_output()
{
    cout << month <<"/" << day << "/" << year << endl;
}

int main()
{
    CDate date;
    date.set_date(2016,2,29);
    date.format_output();
    date.next_day();
    date.format_output();
    return 0;
}
