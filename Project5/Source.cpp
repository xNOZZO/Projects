#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[+] Переводчик\n";
	cout << "[1] Русские слова\n";    
	cout << "[2] Английские слова\n\n";
	cout << "[3] Выйти\n";

	int choise;
	int rus;
	cout << "Введите значение: ";
		cin >> choise;
		system("cls");

		switch (choise) {
		case 1: 
			cout << "Переводчик Русский -> Английский.\nСписок русских слов: \n\n";
			cout << "[1] Меч\n";
			cout << "[2] Мяч\n";
			cout << "[3] Бомба\n";
			cout << "[4] Смерть\n";
			cout << "[5] Апокалипсис\n";
			cout << "[6] Извращенец\n";
			cout << "[7] Пуля\n";
			cout << "[8] Убийца\n";
			cout << "[9] Пистолет\n";
			cout << "[10] Металл\n";
			cout << "[11] Яд\n";
			cout << "[12] Никита\n";
			cout << "[13] Китаец\n";
			cout << "[14] Японец\n";
			cout << "[15] Русский\n\n";
			cout << "[-] Введите значение: ";
			cin >> rus;
			system("cls");
			switch (rus) {
			case 1:
				cout << "Меч -> Sword\n\n\n\n\n";
				break;
			case 2:
				cout << "Мяч -> Ball\n\n\n\n\n";
				break;
			case 3:
				cout << "Бомба -> Bomb\n\n\n\n\n";
				break;
			case 4: 
				cout << "Смерть -> Death\n\n\n\n\n";
				break;
			case 5:
				cout << "Апокалипсис -> Apocalypse\n\n\n\n\n";
				break;
			case 6:
				cout << "Извращенец -> Pervent\n\n\n\n\n";
				break;
			case 7:
				cout << "Пуля -> Bullet\n\n\n\n\n";
				break;
			case 8:
				cout << "Убийца -> Killer\n\n\n\n\n";
				break;
			case 9:
				cout << "Пистолет -> Handgun\n\n\n\n\n";
				break;
			case 10:
				cout << "Металл -> Metal\n\n\n\n\n";
				break;
			case 11:
				cout << "Яд -> Poison\n\n\n\n\n";
				break;
			case 12:
				cout << "Никита -> Nikita\n\n\n\n\n";
				break;
			case 13:
				cout << "Китаец -> Chinese\n\n\n\n\n";
				break;
			case 14:
				cout << "Японец -> Japanese\n\n\n\n\n";
				break;
			case 15:
				cout << "Русский -> Russian\n\n\n\n\n";
			default: {
				cout << "Такова слова вапщета нет :(";
				Sleep(3500);
				return 0;
			}
				break;
			}
		case 2:
			cout << "Переводчик Английский -> Русский.\nСписок английских слов: \n\n";
			cout << "[1] Sword\n";
			cout << "[2] Ball\n";
			cout << "[3] Bomb\n";
			cout << "[4] Death\n";
			cout << "[5] Apocalypse\n";
			cout << "[6] Pervent\n";
			cout << "[7] Bullet\n";
			cout << "[8] Killer\n";
			cout << "[9] Handgun\n";
			cout << "[10] Metal\n";
			cout << "[11] Poison\n";
			cout << "[12] Nikita\n";
			cout << "[13] Chinese\n";
			cout << "[14] Japanese\n";
			cout << "[15] Russian\n";
			cout << "[-] Выберите значение: ";
			cin >> rus;
			system("cls");
			switch (rus) {
			case 1:
				cout << "Sword -> Меч\n\n\n\n\n";
				break;
			case 2:
				cout << "Ball -> Мяч\n\n\n\n\n";
				break;
			case 3:
				cout << "Bomb -> Бомба\n\n\n\n\n";
				break;
			case 4:
				cout << "Death -> Смерть\n\n\n\n\n";
				break;
			case 5:
				cout << "Apocalypse -> Апокалипсис\n\n\n\n\n";
				break;
			case 6:
				cout << "Pervent -> Извращенец\n\n\n\n\n";
				break;
			case 7:
				cout << "Bullet -> Пуля\n\n\n\n\n";
				break;
			case 8:
				cout << "Killer -> Убийца\n\n\n\n\n";
				break;
			case 9:
				cout << "Handgun -> Пистолет\n\n\n\n\n";
				break;
			case 10:
				cout << "Metal -> Металл\n\n\n\n\n";
				break;
			case 11:
				cout << "Poison -> Яд\n\n\n\n\n";
				break;
			case 12:
				cout << "Nikita -> Никита\n\n\n\n\n";
				break;
			case 13:
				cout << "Chinese -> Китаец\n\n\n\n\n";
				break;
			case 14:
				cout << "Japanese -> Японец\n\n\n\n\n";
				break;
			case 15:
				cout << "Russian -> Русский\n\n\n\n\n";
				break;
			default: {
				cout << "Такова слова вапщета нет :(";
				Sleep(3500);
				return 0;
			}
				break;
			}
			break;
		case 3:
			cout << "Выход";
			Sleep(600);
			system("cls");
			cout << "Выход.";
			Sleep(600);
			system("cls");
			cout << "Выход..";
			Sleep(600);
			system("cls");
			cout << "Выход...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			Sleep(1000);
			exit;
			break;
		default: {
			cout << "Понял.\n\n\n\n\n";
			Sleep(2000);
			return 0;
		}
		}


	return 0;
}