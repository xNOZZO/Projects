#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	setlocale(0, "");

	int n1;
	cout << "Введите первое число: " << endl;
	cin >> n1;
	int n2;
	system("cls");
	cout << "Введите второе число: " << endl;
	cin >> n2;
	system("cls");
	cout << "[+] Выберите операцию: \n";
	cout << "[1] +\n";
	cout << "[2] -\n";
	cout << "[3] *\n";
	cout << "[4] /\n";
	cout << "[5] %\n";
		int operation;
		cin >> operation;

	double res = 0;
	if (operation == 1) {
		res = n1 + n2;
		system("cls");
		cout << "Результат: " << n1 << " + " << n2 << " = " << res;
	}

	else if (operation == 2) {
		res = n1 - n2;	
		system("cls");
		cout << "Результат: " << n1 << " - " << n2 << " = " << res;
	}

	else if (operation == 3) {
		res = n1 * n2;
		system("cls");
		cout << "Результат: " << n1 << " * " << n2 << " = " << res;
	}

	else if (operation == 4) {
		if (n2 == 0) {
			cout << "Поделил на ноль = убил Москву. Не надо :(" << endl;
			return 0;
		}
		res = n1 / n2;
		system("cls");
		cout << "Результат: " << n1 << " / " << n2 << " = " << res;
	}

	else if (operation == 5) {
		res = n1 % n2;
		system("cls");
		cout << "Результат: " << n1 << " % " << n2 << " = " << res;
	}

	else {
		cout << "Чё?((";
	}
	return 0;

}