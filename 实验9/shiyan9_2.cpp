#include<iostream>
using namespace std;
const double PI = 3.14159;
class Circly {
    public:
        void setRadius(double r);
        double area();
        double circumference();
    private:
        double radius;
};

void Circly::setRadius(double r)
{
    radius = r;
}

double Circly::area()
{
    return PI*radius*radius;
}

double Circly::circumference()
{
    return 2*PI*radius;
}

int main()
{
    double r;
    cout << "请输入旱冰场的半径:" ;
    cin >> r;
    Circly c;
    c.setRadius(r);
    cout <<"旱冰场的造价为:" << 20*c.area()+35*c.circumference()<< " 元" << endl;
    return 0;
}
    
