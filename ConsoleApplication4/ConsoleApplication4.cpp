﻿// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
    int age[5];
    int youngest_age = INT_MAX; // начальное значение максимально возможного целочисленного значения
    double discount = 0.0;

    // заполнение массива возрастов и определение младшего возраста
    for (int i = 0; i < 5; i++) {
        cout << "Введите возраст " << i + 1 << "-го человека: ";
        cin >> age[i];
        if (age[i] < youngest_age) {
            youngest_age = age[i];
        }
    }

    // определение скидки в зависимости от младшего возраста
    if (youngest_age < 18) {
        discount = 0.25;
    }
    else if (youngest_age < 25) {
        discount = 0.15;
    }
    else if (youngest_age > 64) {
        discount = 0.40;
    }
    else {
        discount = 0.0;
    }

    // вывод общей стоимости билетов с учетом скидки
    double total_cost = 50.0 - (50.0 * discount);
    cout << "Общая стоимость билетов: " << total_cost << " долларов" << endl;

    return 0;
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
