#include <iostream>
using namespace std;
#define clear system ("cls");
int menufunctions();
void clearc() {
	clear;
}
void background() {
	int vibor;
	cout << "\t���� ������ ����\n";
	cout << "\t[1] - ����� ���� \n";
	cout << "\t[2] - ������� ����\n";
	cout << "\t[3] - ������� ���� \n";
	cout << "\t[4] - ������� ����\n";
	cout << "\t[5] - ����� ����\n";
	cout << "\t[6] - ���������\n";
	cout << "\t[7] - ����� �� �������\n";
	cout << "��� ����� -> ";
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
	cout << "\t���� ������ ����\n";
	cout << "\t[1] - ������-������ ���� \n";
	cout << "\t[2] - ������� ����\n";
	cout << "\t[3] - ������� ���� \n";
	cout << "\t[4] - ������� ����\n";
	cout << "\t[5] - ����� ����\n";
	cout << "\t[6] - ��������� � ���������������\n";
	cout << "\t[7] - ����� �� �������\n";
	cout << "��� ����� -> ";
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
	cout << sizeof(int) << " ������� INT\n";
	cout << "������� [1] ��� ���������� � ����";
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
	cout << sizeof(char) << " ������� char\n";
	cout << "������� [1] ��� ���������� � ����";
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
	cout << sizeof(double) << " ������� double\n";
	cout << "������� [1] ��� ���������� � ����";
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
	cout << sizeof(float) << " ������� float\n";
	cout << "������� [1] ��� ���������� � ����";
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
	cout << sizeof(bool) << " ������� bool\n";
	cout << "������� [1] ��� ���������� � ����";
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
	cout << "\t\t������, � �������!";
}
void kvadrat5x5() {
	cout << "\t\t��� ��� �������!\n";
	for (int y = 0; y < 5; y++) {
		cout << "\t";
		for (int x = 0; y < 5; x++) {
			cout << "# ";
		}
		cout << "\n";
	}
	cout << "������� 1 ��� ���������� � ����";
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
	cout << "\t���� �������\n";
	cout << "\t[1] - �������� �������\n";
	cout << "\t[2] - ��������� ����� ���� ������� \n";
	cout << "\t[3] - ��������� ����� ������ �������\n";
	cout << "\t[4] - ����� ������� ���� ������ Int\n";
	cout << "\t[5] - ����� ������� ���� ������ Char\n";
	cout << "\t[6] - ����� ������� ���� ������ Double\n";
	cout << "\t[7] - ����� ������� ���� ������ Float\n";
	cout << "\t[8] - ����� ������� ���� ������ Bool\n";
	cout << "\t[9] - ����� ��������� '������ � �������'\n";
	cout << "\t[10] - ����� �������� 5�5 \n";
	cout << "����������� ��� ����� - > ";
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