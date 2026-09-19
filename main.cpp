// Лабораторная работа № 1. Вариант 24.
// Выполнил: Чепуштанов А.
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
        cout << "\n=== Вариант 24: Кинетическая энергия ===\n";
        cout << "1. Рассчитать кинетическую энергию\n";
	cout << "2. Рассчитать импульс\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Введите массу (m) и скорость (v): ";
                cin >> m >> v;
                cout << "Кинетическая энергия = " << kineticEnergy(m, v) << "\n";
                break;
	    case 2:
		cout << "Введите массу (m) и скорость (v): ";
		cin >> m >> v;
		cout << "Импульс = " << momentum(m, v) << "\n";
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
