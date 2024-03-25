#include <iostream>
#include <random>
#include <Windows.h>
void Ex1();
void Ex2();
void Ex3();
void Ex4();
void Ex5();
void Ex6();
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choose;
    std::cout << "Выберите номер задания, которое хотите проверить\n";
    std::cin >> choose;
    if (choose == 1)
    {
        Ex1();
    }
    else if (choose == 2)
    {
        Ex2();
    }
    else if (choose == 3)
    {
        Ex3();
    }
    else if (choose == 4)
    {
        Ex4();
    }
    else if (choose == 5)
    {
        Ex5();
    }
    else if (choose == 6)
    {
        Ex6();
    }
    return 0;
}
void Ex1()
{
    int year1 = 0, month1 = 0, day1 = 0;
    int year2 = 0, month2 = 0, day2 = 0;
    std::cout << "Введите год первой даты\n";
    std::cin >> year1;
    std::cout << "Введите месяц первой даты\n";
    std::cin >> month1;
    std::cout << "Введите день первой даты\n";
    std::cin >> day1;
    std::cout << "Введите год второй даты\n";
    std::cin >> year2;
    std::cout << "Введите месяц второй даты\n";
    std::cin >> month2;
    std::cout << "Введите день второй даты\n";
    std::cin >> day2;
    int start, int end;
    if ()
}