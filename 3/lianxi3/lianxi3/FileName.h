#pragma once
#include <iostream>
#include <cmath>
class Circle {
private:
    double cr{ 0 }; //半径
    double cx{ 0 }; //圆心x坐标
    double cy{ 0 }; //圆心y坐标
public:
    void setcr(double r);
    void setcx(double x);
    void setcy(double y);
    double getcr();
    double getcx();
    double getcy();
};
class Dot {
private:
    double dx{ 0 }; //点的x坐标
    double dy{ 0 }; //点的y坐标
public:
    void setdx(double x);
    void setdy(double y);
    double getdx();
    double getdy();
};

void relation(Circle c1, Dot d1);