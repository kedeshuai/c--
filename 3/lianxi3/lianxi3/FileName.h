#pragma once
#include <iostream>
#include <cmath>
class Circle {
private:
    double cr{ 0 }; //�뾶
    double cx{ 0 }; //Բ��x����
    double cy{ 0 }; //Բ��y����
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
    double dx{ 0 }; //���x����
    double dy{ 0 }; //���y����
public:
    void setdx(double x);
    void setdy(double y);
    double getdx();
    double getdy();
};

void relation(Circle c1, Dot d1);