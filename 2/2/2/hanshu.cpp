#include <iostream>
#include<string>
#include "main.h"

void Printnum()
{
	std::cout << "1�������ϵ��"<< std::endl;
	std::cout << "2����ʾ��ϵ��"<< std::endl;
	std::cout << "3��ɾ����ϵ��"<< std::endl;
	std::cout << "4��������ϵ��"<< std::endl;
	std::cout << "5���޸���ϵ��"<< std::endl;
	std::cout << "6�������ϵ��"<< std::endl;
	std::cout << "0���˳�ͨѶ¼"<< std::endl;
}

void tianjia()
{
	for (int i = 0; i < 20; i++)
	{
		if (peoplearry[i].name.empty())
		{
			std::cout << "��������ϵ��������" << std::endl;
			getline(std::cin >> std::ws, peoplearry[i].name);
			std::cout << "��������ϵ�˵绰��" << std::endl;
			std::cin >> peoplearry[i].phone;
			break;
		}
		else
			std::cout << "��ϵ����������ɾ����ϵ�˺������" << std::endl;
	}
}

void xianshi()
{
	std::cout<<"ͨѶ¼��ʾ���£�"<<std::endl;
	for (int i = 0; i < 20; i++)
	{
		if (peoplearry[i].name.empty() == false)
			std::cout << "������" << peoplearry[i].name << " �绰��" << peoplearry[i].phone << std::endl;
	}
}

void shanchu()
{
	tongxun people;
	int get{ 0 };
	std::cout << "������Ҫɾ������ϵ��������" << std::endl;
	getline(std::cin >> std::ws, people.name);
	for (int i = 0; i < 20; i++)
	{
		if (peoplearry[i].name == people.name) {
			peoplearry[i].name.clear();
			peoplearry[i].phone = 0;
			std::cout << "ɾ���ɹ�" << std::endl;
			get = 1;
			break;
		}
	}
	if (get == 0)
		std::cout << "δ�ҵ���ϵ��" << std::endl;
}

void chaxun()
{
	int i;
	std::cout << "������Ҫ���ҵ���ϵ��������"<<std::endl;
	getline(std::cin >> std::ws, people.name);
	for ( i = 0; i < 20; i++)
	{
		if (peoplearry[i].name==people.name)
		{
			std::cout << "������" << peoplearry[i].name << " �绰��" << peoplearry[i].phone << std::endl;
			break;
		}
	}
	if ( i == 20)
		std::cout << "δ�ҵ���ϵ��" << std::endl;
}

void xiugai()
{
	int i;
	std::cout << "������Ҫ�޸ĵ���ϵ��������" << std::endl;
	getline(std::cin >> std::ws, people.name);
	for (i = 0; i < 20; i++)
	{
		if (peoplearry[i].name == people.name)
		{
			std::cout << "�������µĵ绰��" << std::endl;
			std::cin >> people.phone;
			peoplearry[i].phone = people.phone;
			std::cout << "�޸ĳɹ�" << std::endl;
			break;
		}
	}
	if (i == 20)
		std::cout << "δ�ҵ���ϵ��" << std::endl;
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
			std::cout << "��պ��ͨѶ¼Ϊ" << std::endl;
			xianshi();
			break;
		case 0:
			std::cout << "�˳�ͨѶ¼" << std::endl;
			system("pause");
			return 0;
			break;
		default:
			std::cout << "�������,��������" << std::endl;
			break;
		}
		return 1;
	}

