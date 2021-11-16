#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[+] Программа - 'Геометрические фигуры'" << endl << endl;
	cout << "[1] Линия\n\n";
	cout << "[+] Выберите фигуру: ";

	int figure;
	int form;

	int linelenght;
	char linetexture;

	int a = 0;
	int b = 0;

	cin >> figure;
	if (figure == 1) {
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
	}
	else {
		cout << "Такой формы линии не существует. Удали винду пж\n";
		Sleep(2000);
		return 0;
	}
	return 0;
}