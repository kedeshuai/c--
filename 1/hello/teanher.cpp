#include<iostream>
#include<string>

struct Person {
	std::string name[5];
	int age[5];
};

void Mao(Person& person);
void Getmes(Person& person);
void Printage(Person& person);

void Getmes(Person& person)
{
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter the  name of student : ";
        std::getline(std::cin >> std::ws, person.name[i]);
        std::cout << "Enter the age of name : ";
        std::cin >> person.age[i];
    }
        
}

void Printage(Person& teacher)
{
    for (int i = 0; i < 5; i++) {
        std::cout << "The name of student  is " << teacher.name[i] << std::endl;
        std::cout << "The score of Student is:" << teacher.age[i] << std::endl;;
    }
}

void Mao(Person& person)
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (person.age[j] < person.age[j + 1])
            {
                std::string temp = person.name[j];
                int tempage = person.age[j];
                person.name[j] = person.name[j + 1];
                person.age[j] = person.age[j + 1];
                person.name[j + 1] = temp;
                person.age[j + 1] = tempage;
            }
        }
    }
}

int main(){
    Person teacher;
    Getmes(teacher);
    Mao(teacher);
    Printage(teacher);
    return 0;
}