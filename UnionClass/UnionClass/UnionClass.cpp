// UnionClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header1.hpp"


int main()
{
    int count_of_student;
    int count_letter_name;
    int count_letter_of_city;
    int count_letter_of_name_of_faculty;
    Student* student;
    
    std::cout << "count of student = ";
    std::cin >> count_of_student;
    student = (Student*) new Student[count_of_student];
    
    for (int i = 0; i < count_of_student; ++i) {

        std::cout << "Count letter of name\n";
        std::cin>> count_letter_name;
        student[i].id.name = (char*) new char[count_letter_name + 1];

        std::cout << "Name of student\n";
        std::cin >> student[i].id.name;

        std::cout << " Birthday of student\n";
        std::cin >> student[i].id.birthdate;

        std::cout << "count letter of city\n";
        std::cin >> count_letter_of_city;
        student[i].id.city = (char*) new char[count_letter_of_city + 1];
        std::cin >> student[i].id.city;

        std::cout << "count letter of faculty of student\n";
        std::cin >> count_letter_of_name_of_faculty;
        student[i].faculty = (char*) new char[count_letter_of_name_of_faculty + 1];
        std::cout << "name of faculty\n";
        std::cin >> student[i].faculty;

        std::cout << "age = ";
        std::cin >> student[i].age;

        std::cout << "grade = ";
        std::cin >> student[i].grade;

        std::cout << "year_of_study = ";
        std::cin >> student[i].year_of_study;

    }

    for(int i = 0; i < count_of_student; ++i)
    {
        std::cout << "Student " << student[i].id.name << " from " << student[i].id.city << " city \n";
        std::cout << "Birthday of " << student[i].id.name << "is " << student[i].id.birthdate << "\n";
        std::cout << " Age of "<< student[i].id.name<<" is "<<student[i].age << "\n Grade of "<<student[i].id.name<<" is " << student[i].grade << "\n Year of study is " << student[i].year_of_study << "\n Faculty is "<<student[i].faculty << "\n";

    }
}


/*void A::func()
{
    std::cout << "func" << std::endl;
}


student->id.

student[i].id.*/
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
