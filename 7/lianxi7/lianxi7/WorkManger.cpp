#include<iostream>
#include<string>
#include<fstream>
#include"WorkManger.h"



WorkManger::WorkManger()
{

}

WorkManger::~WorkManger()
{

}

void WorkManger::shownum()
{
	std::cout << "*********欢迎使用职工管理系统!*********"<< std::endl;
	std::cout << "************0.退出管理程序 ************"<< std::endl;
	std::cout << "************1.增加职工信息 ************"<< std::endl;
	std::cout << "************2.显示职工信息 ************"<< std::endl;
	std::cout << "************3.删除离职职工 ************"<< std::endl;
	std::cout << "************4.修改职工信息 ************"<< std::endl;
	std::cout << "************5.查找职工信息 ************"<< std::endl;
	std::cout << "************6.按照编号排序 ************"<< std::endl;
	std::cout << "************7.清空所有文档 ************"<< std::endl;
	std::cout << "***************************************"<< std::endl;
	std::cout << std::endl;
}

void WorkManger::addworker()
{

}

void WorkManger::showallworker()
{

}

void WorkManger::deleteworker()
{

}

void WorkManger::modifyworker()
{

}

void WorkManger::searchworker()
{

}

void WorkManger::sortworker()
{

}

void WorkManger::clearall()
{

	
}

void main()
{
	while (1)
	{
		WorkManger workmanger;
		workmanger.shownum();
		int choice;
		std::cin >> choice;
		switch (choice)
		{
		case 0:
			std::cout << "感谢使用！" << std::endl;
			exit(0);
			break;
		case 1:
			workmanger.addworker();
			break;
		case 2:
			workmanger.showallworker();
			break;
		case 3:
			workmanger.deleteworker();
			break;
		case 4:
			workmanger.modifyworker();
			break;
		case 5:
			workmanger.searchworker();
			break;
		case 6:
			workmanger.sortworker();
			break;
		case 7:
			workmanger.clearall();
			break;
		default:
			std::cout << "输入错误，请重新输入！" << std::endl;
			break;
		}
	}
}