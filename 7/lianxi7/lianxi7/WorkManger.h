#pragma once
#include <iostream>
#include <string>
class WorkManger
{
public:
    //����
    WorkManger();
    //����
    ~WorkManger();
    //��ʾ�˵�
    void shownum();
    //����ְ��
    void addworker();
    //��ʾ����ְ����Ϣ
    void showallworker();
    //ɾ��ְ��
    void deleteworker();
    //�޸�ְ����Ϣ
    void modifyworker();
    //����ְ��
    void searchworker();
	//����ְ��
	void sortworker();
	//��������ĵ�
	void clearall();
private:


};