#include <fstream>
#include <iostream> 
#include <string>

using namespace std;

int main()
{
    string name;
    int age;
    ofstream outfile; //Ҳ����ʹ��fstream, ����fstream��Ĭ�ϴ򿪷�ʽ���ض��ļ�����

    // ofstream��Ĭ�ϴ򿪷�ʽ��, �ض�ʽд�� ios::out | ios::trunc
    // fstream��Ĭ�ϴ򿪷�ʽ��, �ض�ʽд�� ios::out
    // ����ָ���򿪷�ʽ
    outfile.open("user.txt", ios::out | ios::trunc);
    while (1) {
        cout << "����������: [ctrl+z�˳�] ";
        cin >> name; if (cin.eof()) { //�ж��ļ��Ƿ�    ����
            break;
        }
        outfile << name << "\t";

        cout << "����������: ";
        cin >> age;
        outfile << age << endl; //�ı��ļ�д��
    }

    // �رմ򿪵��ļ�
    outfile.close();

    system("pause");
    return 0;
}