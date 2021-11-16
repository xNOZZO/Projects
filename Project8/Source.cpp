#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "[-] Маша: -- Чего бы сегодня нарисовать?.." << endl << endl;
	cout << "[1] Линия\n";
	cout << "[2] Кwaдрат\n";
	int choise;
	cin >> choise;

	if (choise == 1) {

		int form;

		int linelenght;
		char linetexture;

		int a = 0;
		int b = 0;
		system("cls");
		cout << "Выберите тип: \n\n";
		cout << "[1] Горизонтальная" << endl;
		cout << "[2] Вертикальная" << endl << endl;
		cout << "-> Введите значение: ";
		cin >> form;
		if (form == 1) {
			system("cls");
			cout << "[+] Введите длину линии: ";
			cin >> linelenght;
			system("cls");
			cout << "[+] Введите текстуру линии: ";
			cin >> linetexture;
			system("cls");
			while (a < linelenght) {
				cout << linetexture;
				a++;
			}
		}
		else if (form == 2) {
			system("cls");
			cout << "[+] Введите длину линии: ";
			cin >> linelenght;
			system("cls");
			cout << "[+] Введите текстуру линии: ";
			cin >> linetexture;
			system("cls");
			while (b < linelenght) {
				cout << linetexture << "\n";
				b++;
			}
		}
		else {
			cout << "Такой формы линии не существует. Удали винду пж\n";
			Sleep(2000);
			return 0;
		}
		return 0;
	}
	else if (choise == 2) {
		int type;
		int size;
		char texture;
		system("cls");
		cout << "Введите размер сторон квадрата: ";
		cin >> size;
		system("cls");
		cout << "Выберите текстуру квадрата: ";
		cin >> texture;
		system("cls");
		cout << "[_]Выберите тип квадрата: \n\n";
		cout << "[1] Заполненный\n";
		cout << "[2] Пустой\n";
		cout << "[3] БОНУС!!! Матрица\n";
		cin >> type;
		if (type == 1) {
			system("cls");
			cout << "\n\n\n\n\n";
			for (int y = 0; y < size; y++) {
				for (int x = 0; x < size; x++) {
					if (y == 0 || y == size - 1 || x == 0 || x == size - 1)
					{
						cout << texture << " ";
					}
					else {
						cout << texture << " ";
					}
				}
				cout << "\n";
			}
			cout << "\n\n\n\n\n";
		}
		else if (type == 2) {
			system("cls");
			cout << "\n\n\n\n\n";
			for (int y = 0; y < size; y++) {
				for (int x = 0; x < size; x++) {
					if (y == 0 || y == size - 1 || x == 0 || x == size - 1)
					{
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << "\n";
			}
			cout << "\n\n\n\n\n";
		}
		else if (type == 3) {
			system("cls");
			cout << "\n\n\n\n\n";
			for (int y = 0; y < size; y++) {
				for (int x = 0; x < size; x++) {
					if (y == 0 || y == size - 1 || x == 0 || x == size - 1)
					{
						cout << texture << " ";
					}
					else {
						cout << rand() % 2 << " ";
					}
				}
				cout << "\n";
			}
			cout << "\n\n\n\n\n";

		}
	}
	return 0;
}
