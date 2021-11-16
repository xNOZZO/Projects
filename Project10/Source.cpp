#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[+] Программа \"Геометрические фигуры\"\n\n";
	cout << "[1] Прямоугольник\n";
	cout << "[2] Квадрат\n";
	cout << "[3] Линия\n";
	cout << "[4] Треугольник\n";
	cout << "[+] Выберите фигуру: ";

	int figure;
	cin >> figure;

	if (figure == 1) {
		system("cls");
		cout << "[1] Прямоугольник\n\n";
		cout << "[+] Ширина:";
		int len;
		cin >> len;

		cout << "[+] Высота: ";
		int hei;
		cin >> hei;

		cout << "[+] Текстура: ";
		char textur;
		cin >> textur;

		cout << "[+] A: Заполненный/ B: Пустой \n";
		char typ;
		cin >> typ;

		Sleep(1000);
		if (typ == 'A') {
			system("cls");
			for (int y = 0; y < hei; y++) {
				cout << "\t\t\t\t";
				for (int x = 0; x < len; x++) {
					cout << textur << " ";
				}
				cout << endl;
			}
		}
		else if (typ == 'B') {
			system("cls");
			for (int y = 0; y < hei; y++) {
				cout << "\t\t\t\t";
				for (int x = 0; x < len; x++) {
					if (y == 0 || y == hei - 1 || x == 0 || x == len - 1)
					{
						cout << textur << " ";
					}
					else {
						cout << "  ";
					}
				}

				cout << endl;
			}
		}

	}
	else if (figure == 2) {
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
		cout << "[+]Выберите тип квадрата: \n\n";
		cout << "[1] Заполненный\n";
		cout << "[2] Пустой\n";
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
	}
	else if (figure == 3) {
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
	else if (figure == 4) {
		char tip;
		int velik;
		char textura;
		system("cls");
		cout << "[+] Введите длину сторон равнобедренного треугольника: ";
		cin >> velik;
		system("cls");
		cout << "[+] Выберите тип равнобедренного треугольника: \n\n";
		cout << "A: Пустой / B: Заполненный \n";
		cin >> tip;
		system("cls");
		cout << "[+] Введите текстуру равнобедренного треугольника: ";
		cin >> textura;
		if (tip == 'A') {
			for (int y = 0; y < velik; y++) {
				for (int x = 0; x <= velik; x++) {
					if (x == (velik / 2) + y || x == (velik / 2) - y || y == velik / 2) {
						cout << textura << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
		}
		
	}
	return 0;
}