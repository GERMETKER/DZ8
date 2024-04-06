#include <iostream>
#include <random>
#include <Windows.h>
void Ex1();
void Ex2();
void Ex3();
void Ex4();
void Ex5();
void Ex6();
void SrArifm(int arr[], int size);
void ZnChisla(int arr[], int size);
int MaxDelit(int numb1, int numb2, int bazenumb2);
void Game(int randnumb, int* popitka, int arr[]);
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
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
    //int sday = 0, smonth = 0, syear = 0;
    int razday = 0;
    int n = 0;
    int fulldate1 = year1 * 10000 + month1 * 100 + day1;
    int fulldate2 = year2 * 10000 + month2 * 100 + day2;
    for (int y = year1, m = month1, d = day1; fulldate1 < fulldate2; d++)
    {
        int dm = 0;
        if (m == 1)
        {
            dm = 31;
        }
        else if (m == 2)
        {
            if (y % 4 == 0)
            {
                dm = 29;
            }
            else
            {
                dm = 28;
            }
        }
        else if (m == 3)
        {
            dm = 31;
        }
        else if (m == 4)
        {
            dm = 30;
        }
        else if (m == 5)
        {
            dm = 31;
        }
        else if (m == 6)
        {
            dm = 30;
        }
        else if (m == 7)
        {
            dm = 31;
        }
        else if (m == 8)
        {
            dm = 31;
        }
        else if (m == 9)
        {
            dm = 30;
        }
        else if (m == 10)
        {
            dm = 31;
        }
        else if (m == 11)
        {
            dm = 30;
        }
        else if (m == 12)
        {
            dm = 31;
        }
        if (d == dm)
        {
            m++;
            d = 0;
        }
        if (m == 13)
        {
            y++;
            m = 1;
        }
        razday++;
        fulldate1 = y * 10000 + m * 100 + d;
    }
    std::cout << "Разница в днях: " << razday-1 << " дней\n";
}
void Ex2()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 100;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    SrArifm(arr, size);
}
void SrArifm(int arr[], int size)
{   
    float sum = 0, kolv = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        kolv++;
    }
    float srar = sum / kolv;
    std::cout << "Среднее арифметическое - " << srar << "\n";
}
void Ex3()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = -10 + rand() % 20;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    ZnChisla(arr, size);
}
void ZnChisla(int arr[], int size)
{
    int plys = 0, min = 0, zero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            min++;
        }
        else if (arr[i] > 0)
        {
            plys++;
        }
        else
        {
            zero++;
        }
    }
    std::cout << "Положительные элементы: " << plys << "штук\n";
    std::cout << "Отрицательные элементы: " << min << "штук\n";
    std::cout << "Равные нулю элементы: " << zero << "штук\n";
}
void Ex4()
{
    std::cout << "Честно вобще не понял что от меня требуется\n";
    std::cout << "Всмысле, зачем нам перегруженные фуекции, чем заполнять матрицу и как они должны отлиичаться\n";
    std::cout << "Ещё как определить макс значение если у нас char\n";
}
void Ex5()
{
    int numb1 = 0, numb2 = 0;
    std::cout << "Введите первое число\n";
    std::cin >> numb1;
    std::cout << "Введите второе число\n";
    std::cin >> numb2;
    int big = 0, smoll1 = 0, smoll2 = 0;
    if (numb1 > numb2)
    {
        big = numb1;
        smoll1 = numb2;
        smoll2 = numb2;
    }
    else
    {
        big = numb2;
        smoll1 = numb1;
        smoll2 = numb1;
    }
    std::cout << MaxDelit(big, smoll1, smoll2);
}
int MaxDelit(int numb1, int numb2, int bazenumb2)
{
    if (numb1 % numb2 == 0 && bazenumb2 % numb2 == 0)
    {
        return numb2;
    }
    else
    {
        MaxDelit(numb1, numb2 - 1, bazenumb2);
    }
}
void Ex6()
{
    int randthous = 1 + rand() % 9;
    int randhund = rand() % 10;
    int randtens = rand() % 10;
    int randed = rand() % 10;
    int arr[4]{ randed , randtens , randhund , randthous };
    /*
    std::cout << randthous << "\n";
    std::cout << randhund << "\n";
    std::cout << randtens << "\n";
    std::cout << randed << "\n";
    int randnumb = randthous * 1000 + randhund * 100 + randtens * 10 + randed;
    std::cout << randnumb << "\n";
    */
    int randnumb = randthous * 1000 + randhund * 100 + randtens * 10 + randed;
    int playernumb = 0;;
    std::cout << "Игра «Быки и коровы»\n";
    std::cout << "Попробуй угадать загаданное компьютером четырёхзначное число!\n";
    int popitka = 0;
    int* ykpopitka = &popitka;
    Game(randnumb, ykpopitka, arr);
    std::cout << "Число угадано!!!\n";
    std::cout << "Поздравлем с победой!!!\n";
    std::cout << "Количество попыток: " << popitka << "\n";
}
void Game(int randnumb, int* popitka, int arr[])
{
    if (*popitka > 0)
    {
        std::cout << "Число не то\n";
    }
    *popitka = *popitka + 1;
    int playernumb;
    int cow = 0, boool = 0;
    std::cout << randnumb << "(Вывод загаданного числа для удобства)\n";
    int index = 0;
    std::cout << "Введите четырёхзначное число\n";
    std::cin >> playernumb;
    if (playernumb < 999 || playernumb > 10000)
    {
        std::cout << "Число введено неверно\n";
        Game(randnumb, popitka, arr);
    }
    else
    {
        
        int zamplnumb = playernumb;
        while (zamplnumb > 0)
        {
            int ost = zamplnumb % 10;
            if (arr[index] == ost)
            {
                boool++;
            }
            else
            {
                int schcow = 0;
                int esk = -1;
                for (int i = 0; i < 4; i++)
                {
                    if (arr[i] == ost)
                    {
                        schcow = 1;
                    }
                }
                cow = cow + schcow;
            }
            zamplnumb = zamplnumb / 10;
            index++;
        }
        if (randnumb != playernumb)
        {
            std::cout << "Количество быков: " << boool << "\n";
            std::cout << "Количество коров: " << cow << "\n";
            Game(randnumb, popitka, arr);
        }
    }
}
