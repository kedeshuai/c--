#include <iostream>
#include <string>

struct Student {
    std::string name;
    double score;
};

struct Teacher {
    Student student[5];
    std::string name;
};

void Getscore(Teacher& teacher);
void Printscore(Teacher& teacher);

void Getscore(Teacher& teacher)
{
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter the no." << i << " name of student " << i + 1 << ": ";
        std::getline(std::cin >> std::ws, teacher.student[i].name);
        std::cout << "Enter the score of student " << i + 1 << ": ";
        std::cin >> teacher.student[i].score;
    }
}

void Printscore(Teacher & teacher)
{
     for (int i = 0; i < 5; i++) {
     std::cout << "The name of student " << i + 1 << " is " << teacher.student[i].name << "The score of Student is:" << teacher.student[i].score << std::endl;;
     }
}

int main()
{
    Teacher teacher[3];
    
        Getscore(teacher[0]);
   
        Printscore(teacher[0]);
    
    return 0;
}