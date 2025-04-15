#include <iostream>
#include<string>
#include "main.h"

void Printnum()
{
	std::cout << "1、添加联系人"<< std::endl;
	std::cout << "2、显示联系人"<< std::endl;
	std::cout << "3、删除联系人"<< std::endl;
	std::cout << "4、查找联系人"<< std::endl;
	std::cout << "5、修改联系人"<< std::endl;
	std::cout << "6、清空联系人"<< std::endl;
	std::cout << "0、退出通讯录"<< std::endl;
}

void tianjia()
{
	for (int i = 0; i < 20; i++)
	{
		if (peoplearry[i].name.empty())
		{
			std::cout << "请输入联系人姓名：" << std::endl;
			getline(std::cin >> std::ws, peoplearry[i].name);
			std::cout << "请输入联系人电话：" << std::endl;
			std::cin >> peoplearry[i].phone;
			break;
		}
		else
			std::cout << "联系人已满，请删除联系人后再添加" << std::endl;
	}
}

void xianshi()
{
	std::cout<<"通讯录显示如下："<<std::endl;
	for (int i = 0; i < 20; i++)
	{
		if (peoplearry[i].name.empty() == false)
			std::cout << "姓名：" << peoplearry[i].name << " 电话：" << peoplearry[i].phone << std::endl;
	}
}

void shanchu()
{
	tongxun people;
	int get{ 0 };
	std::cout << "请输入要删除的联系人姓名：" << std::endl;
	getline(std::cin >> std::ws, people.name);
	for (int i = 0; i < 20; i++)
	{
		if (peoplearry[i].name == people.name) {
			peoplearry[i].name.clear();
			peoplearry[i].phone = 0;
			std::cout << "删除成功" << std::endl;
			get = 1;
			break;
		}
	}
	if (get == 0)
		std::cout << "未找到联系人" << std::endl;
}

void chaxun()
{
	int i;
	std::cout << "请输入要查找的联系人姓名："<<std::endl;
	getline(std::cin >> std::ws, people.name);
	for ( i = 0; i < 20; i++)
	{
		if (peoplearry[i].name==people.name)
		{
			std::cout << "姓名：" << peoplearry[i].name << " 电话：" << peoplearry[i].phone << std::endl;
			break;
		}
	}
	if ( i == 20)
		std::cout << "未找到联系人" << std::endl;
}

void xiugai()
{
	int i;
	std::cout << "请输入要修改的联系人姓名：" << std::endl;
	getline(std::cin >> std::ws, people.name);
	for (i = 0; i < 20; i++)
	{
		if (peoplearry[i].name == people.name)
		{
			std::cout << "请输入新的电话：" << std::endl;
			std::cin >> people.phone;
			peoplearry[i].phone = people.phone;
			std::cout << "修改成功" << std::endl;
			break;
		}
	}
	if (i == 20)
		std::cout << "未找到联系人" << std::endl;
}

int Readnum(int number)
	{
		switch (number)
		{
		case 1:
			tianjia();
			break;
		case 2:
			xianshi();
			break;
		case 3:
			shanchu();
			break;
		case 4:
			chaxun();
			break;
		case 5:
			xiugai();
			break;
		case 6:
			memset(peoplearry, 0, sizeof(peoplearry));
			std::cout << "清空后的通讯录为" << std::endl;
			xianshi();
			break;
		case 0:
			std::cout << "退出通讯录" << std::endl;
			system("pause");
			return 0;
			break;
		default:
			std::cout << "输入错误,重新输入" << std::endl;
			break;
		}
		return 1;
	}

