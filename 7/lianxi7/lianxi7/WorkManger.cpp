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
	std::cout << "*********��ӭʹ��ְ������ϵͳ!*********"<< std::endl;
	std::cout << "************0.�˳�������� ************"<< std::endl;
	std::cout << "************1.����ְ����Ϣ ************"<< std::endl;
	std::cout << "************2.��ʾְ����Ϣ ************"<< std::endl;
	std::cout << "************3.ɾ����ְְ�� ************"<< std::endl;
	std::cout << "************4.�޸�ְ����Ϣ ************"<< std::endl;
	std::cout << "************5.����ְ����Ϣ ************"<< std::endl;
	std::cout << "************6.���ձ������ ************"<< std::endl;
	std::cout << "************7.��������ĵ� ************"<< std::endl;
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
			std::cout << "��лʹ�ã�" << std::endl;
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
			std::cout << "����������������룡" << std::endl;
			break;
		}
	}
}