#include <iostream>
#include<cmath>
#include"FileName.h"

void Circle::setcr(double r) { Circle::cr = r; }
void Circle::setcx(double x) { cx = x; }
void Circle::setcy(double y) { cy = y; }
double Circle::getcr() { return cr; }
double Circle::getcx() { return cx; }
double Circle::getcy() { return cy; }
void Dot::setdx(double x) { this->dx = x; }
void Dot::setdy(double y) { this->dy = y; }
double Dot::getdx() { return dx; }
double Dot::getdy() { return dy; }

void relation(Circle c1, Dot d1)
{
    double distance = sqrt(pow(d1.getdx() - c1.getcx(),2) + pow(d1.getdy() - c1.getcy(),2));
    if (distance < c1.getcr())
    {
        std::cout << "点在圆内" << std::endl;
    }
    else if (distance > c1.getcr())
    {
        std::cout << "点在圆外" << std::endl;
    }
    else
    {
        std::cout << "点在圆上" << std::endl;
    }
}
    int main()
    {

        Circle c1;
        c1.setcr(5);
        c1.setcx(0);
        c1.setcy(0);

        Dot d1;
        d1.setdx(3);
        d1.setdy(4);

        relation(c1, d1);
        return 0;
    }