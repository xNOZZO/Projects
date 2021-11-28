#include <iostream>
using namespace std;
#define clear system ("cls");
int menufunctions();
void clearc() {
	clear;
}
void background() {
	int vibor;
	cout << "\tМеню цветов фона\n";
	cout << "\t[1] - Белый цвет \n";
	cout << "\t[2] - Зеленый цвет\n";
	cout << "\t[3] - Красный цвет \n";
	cout << "\t[4] - Лиловый цвет\n";
	cout << "\t[5] - Синий цвет\n";
	cout << "\t[6] - Вернуться\n";
	cout << "\t[7] - Выйти из функции\n";
	cout << "Ваш выбор -> ";
	cin >> vibor;
	switch (vibor)
	{
	case 1:
		clear;
		system("color F0");
		background();
		break;
	case 2:
		clear;
		system("color 20");
		background();
		break;
	case 3:
		clear;
		system("color 40");
		background();
		break;
	case 4:
		clear;
		system("color 50");
		background();
		break;
	case 5:
		clear;
		system("color 10");
		background();
		break;
	case 6:
		clear;
		system("color 0F");
		background();
		break;
	default:
		break;
	}
}
void colortext() {
	int vibor;
	cout << "\tМеню цветов фона\n";
	cout << "\t[1] - Светло-желтый цвет \n";
	cout << "\t[2] - Зеленый цвет\n";
	cout << "\t[3] - Красный цвет \n";
	cout << "\t[4] - Лиловый цвет\n";
	cout << "\t[5] - Синий цвет\n";
	cout << "\t[6] - Вернуться к первоначальному\n";
	cout << "\t[7] - Выйти из функции\n";
	cout << "Ваш выбор -> ";
	cin >> vibor;
	switch (vibor)
	{
	case 1:
		clear;
		system("color 0F");
		colortext();
		break;
	case 2:
		clear;
		system("color 02");
		colortext();
		break;
	case 3:
		clear;
		system("color 04");
		colortext();
		break;
	case 4:
		clear;
		system("color 05");
		colortext();
		break;
	case 5:
		clear;
		system("color 0F");
		colortext();
		break;
	case 6:
		clear;
		system("color 0F");
		colortext();
		break;
	case 7:
		clear;
		menufunctions();
		break;
	default:
		break;
	}
}
void sizeint() {
	cout << sizeof(int) << " Размера INT\n";
	cout << "нажмите [1] для возращение в меню";
	int vibor;
	cin >> vibor;
	if (vibor == 1) {
		clear
			menufunctions();
	}
	else {
		clear;
		sizeint();
	}

}
void sizechar() {
	cout << sizeof(char) << " Размера char\n";
	cout << "нажмите [1] для возращение в меню";
	int vibor;
	cin >> vibor;
	if (vibor == 1) {
		clear
			menufunctions();
	}
	else {
		clear;
		sizechar();
	}

}
void sizedouble() {
	cout << sizeof(double) << " Размера double\n";
	cout << "нажмите [1] для возращение в меню";
	int vibor;
	cin >> vibor;
	if (vibor == 1) {
		clear
			menufunctions();
	}
	else {
		clear;
		sizedouble();
	}

}
void sizefloat() {
	cout << sizeof(float) << " Размера float\n";
	cout << "нажмите [1] для возращение в меню";
	int vibor;
	cin >> vibor;
	if (vibor == 1) {
		clear
			menufunctions();
	}
	else {
		clear;
		sizefloat();
	}

}
void sizebool() {
	cout << sizeof(bool) << " Размера bool\n";
	cout << "нажмите [1] для возращение в меню";
	int vibor;
	cin >> vibor;
	if (vibor == 1) {
		clear
			menufunctions();
	}
	else {
		clear;
		sizebool();
	}

}
void hello() {
	cout << "\t\tПривет, я функция!";
}
void kvadrat5x5() {
	cout << "\t\tВот ваш квадрат!\n";
	for (int y = 0; y < 5; y++) {
		cout << "\t";
		for (int x = 0; y < 5; x++) {
			cout << "# ";
		}
		cout << "\n";
	}
	cout << "нажмите 1 для возращение в меню";
	int vibor;
	cin >> vibor;
	if (vibor == 1) {
		clear
			menufunctions();
	}
	else {
		clear;
		kvadrat5x5();
	}
}
int menufunctions() {
	setlocale(0, "");
	int vibor;
	cout << "\tМеню функций\n";
	cout << "\t[1] - Очищение консоли\n";
	cout << "\t[2] - Изменение цвета фона консоли \n";
	cout << "\t[3] - Изменение цвета текста консоли\n";
	cout << "\t[4] - Вывод размера типа данных Int\n";
	cout << "\t[5] - Вывод размера типа данных Char\n";
	cout << "\t[6] - Вывод размера типа данных Double\n";
	cout << "\t[7] - Вывод размера типа данных Float\n";
	cout << "\t[8] - Вывод размера типа данных Bool\n";
	cout << "\t[9] - Вывод сообщения 'Привет я функция'\n";
	cout << "\t[10] - Вывод квадрата 5х5 \n";
	cout << "Подтвердите ваш выбор - > ";
	cin >> vibor;
	switch (vibor)
	{
	case 1:
		clearc();
		break;
	case 2:
		clear;
		background();
		break;
	case 3:
		clear;
		colortext();
		break;
	case 4:
		clear;
		sizeint();
		break;
	case 5:
		clear;
		sizechar();
		break;
	case 6:
		clear;
		sizedouble();
		break;
	case 7:
		clear;
		sizedouble();
		break;
	case 9:
		clear;
		hello();
		break;
	case 8:
		clear;
		sizebool();
		break;
	case 10:
		clear;
		kvadrat5x5();
		break;
	default:
		clear;
		menufunctions();
		break;
	}
}