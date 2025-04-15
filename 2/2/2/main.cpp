#include<iostream>
#include"main.h"
#include"hanshu.h"

tongxun peoplearry[20];
tongxun people;

int main() {
    while (true)
    {
        Printnum();
		int number;
        std::cin >> number;
        Readnum(number);
    }
}