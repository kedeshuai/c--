#include <fstream>
#include <iostream> 
#include <string>

using namespace std;

int main()
{
    string name;
    int age;
    ofstream outfile; //也可以使用fstream, 但是fstream的默认打开方式不截断文件长度

    // ofstream的默认打开方式是, 截断式写入 ios::out | ios::trunc
    // fstream的默认打开方式是, 截断式写入 ios::out
    // 建议指定打开方式
    outfile.open("user.txt", ios::out | ios::trunc);
    while (1) {
        cout << "请输入姓名: [ctrl+z退出] ";
        cin >> name; if (cin.eof()) { //判断文件是否    结束
            break;
        }
        outfile << name << "\t";

        cout << "请输入年龄: ";
        cin >> age;
        outfile << age << endl; //文本文件写入
    }

    // 关闭打开的文件
    outfile.close();

    system("pause");
    return 0;
}