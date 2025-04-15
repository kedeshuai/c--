#pragma once
#include <iostream>
#include <string>
class WorkManger
{
public:
    //构造
    WorkManger();
    //西沟
    ~WorkManger();
    //显示菜单
    void shownum();
    //增加职工
    void addworker();
    //显示所有职工信息
    void showallworker();
    //删除职工
    void deleteworker();
    //修改职工信息
    void modifyworker();
    //搜索职工
    void searchworker();
	//排序职工
	void sortworker();
	//清空所有文档
	void clearall();
private:


};