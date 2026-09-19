// Лабораторная работа № 1. Вариант 24.
// Выполнил: Чепуштанов А., ФИТ, группа ПИ-51.
#include <iostream>
using namespace std;

// ===== Расчётная функция варианта =====

// Кинетическая энергия тела
double kineticEnergy(double m, double v) {
    return (m * v * v) / 2.0;
}

// Импульс тела
double momentum(double m, double v) {
    return (m * v);
}

// ===== Главная функция: меню =====
int main() {
    int choice;
    double m, v;
    do {
        cout << "\n--- Программа расчётов. Вариант 24 ---\n";
        cout << "1. Рассчитать кинетическую энергию\n";
	cout << "2. Рассчитать импульс\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Введите массу (m) в кг и скорость (v) в м/с: ";
                cin >> m >> v;
                cout << "Кинетическая энергия = " << kineticEnergy(m, v) << " Дж\n";
                break;
	    case 2:
		cout << "Введите массу (m) в кг и скорость (v) в м/с: ";
		cin >> m >> v;
		cout << "Импульс = " << momentum(m, v) << " кг*м/с\n";
		break;
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}
