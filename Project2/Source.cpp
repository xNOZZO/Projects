#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "Программа 'Времена года' " << endl;
	cout << "[1] Лето\n[2] Осень\n[3] Зима\n[4] Весна" << endl;
	char season;
		cout << "Введите время года: ";
	cin >> season;
	if (season == '1') {
		system("color E");
		cout << "Сейчас лето, можно надевать пакет на пах и прыгать в воду." << endl;
	}
	else if (season == '2') {
		system("color 6");
		cout << "Сейчас осень. Дожди, холод, нервоз." << endl;
	}
	else if (season == '3') {
		system("color 8");
		cout << "Сейчас зима. Холодно, что аж соски приклеились к пуховику изнутри." << endl;
	}
	else if (season == '4') {
		system("color 2");
		cout << "Сейчас весна. Ох уж этот пубертатный период и весеннее обострение~" << endl;
	}
	else {
		cout << "Погоди... Чего ты вообще ввёл?\n";
	}
		return 0;
}