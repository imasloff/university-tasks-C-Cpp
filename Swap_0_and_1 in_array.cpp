﻿// 0_1_swap.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "stdio.h"

int main()
{
    int arr[10];
    printf("Enter the array:\n");
    for (int i = 0; i < 10; i++)
        scanf_s("%d", &arr[i]);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 9; j >= i + 1; j--)
            {
                if (arr[j] == 1)
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
        else if (arr[i] == 1)
        {
            for (int j = 9; j >= i + 1; j--)
            {
                if (arr[j] == 0)
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.