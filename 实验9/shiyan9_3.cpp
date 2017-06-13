#include <iostream>
using namespace std;
class Time
{ 
public:
    void set_time( );
    void show_time( );
    void add_a_sec();
    void add_a_minute();
    void add_an_hour();
    void add_secondes(int secs);
    void add_minutes(int mins);
    void add_hours(int hours);
    void check_time();
private:
    bool is_time(int, int, int); int hour;
    int minute;
    int sec; 
};

void Time::check_time()
{
    if(sec>60)
    {
        sec = sec-60;
        minute++;
    }
    if(minute>60)
    {
        minute = minute-60;
        hour++;
    }
    if(hour>24)
        hour= hour-24;
}

void Time::add_a_sec()
{
    sec++;
    check_time();
}

void Time::add_a_minute()
{
    minute++;
    check_time();
}

void Time::add_an_hour()
{
    hour++;
    check_time();
}

void Time::add_secondes(int secs)
{
    sec += secs;
    check_time();
}

void Time::add_minutes(int mins)
{
    minute += mins;
    check_time();
}

void Time::add_hours(int hours)
{   
    hour+=hours;
    check_time();
}

void Time::set_time( )
{   char c1,c2;
    cout<<"请输入时间(格式 hh:mm:ss)"; 
    while(1){ 
        cin>>hour>>c1>>minute>>c2>>sec;
    if(c1!=':'||c2!=':') 
    cout<<"格式不正确,请重新输入"<<endl;
    else if (!is_time(hour,minute,sec)) 
        cout<<"时间非法,请重新输入"<<endl;
    else break;
    } 
}
void Time::show_time( )
{ 
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
bool Time::is_time(int h,int m, int s)
{ if (h<0 ||h>24 || m<0 ||m>60 || s<0 ||s>60)
        return false;
    return true;
}
int main( )
{   Time t1;
    Time &t2=t1;
    t1.set_time( );
    t2.show_time( );
    cout << "正价一小时，一分钟，一秒:" << endl;
    t1.add_a_sec();
    t1.add_an_hour();
    t1.add_a_minute();
    t1.show_time();
    return 0;
}
