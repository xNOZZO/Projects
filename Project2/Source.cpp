#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "��������� '������� ����' " << endl;
	cout << "[1] ����\n[2] �����\n[3] ����\n[4] �����" << endl;
	char season;
		cout << "������� ����� ����: ";
	cin >> season;
	if (season == '1') {
		system("color E");
		cout << "������ ����, ����� �������� ����� �� ��� � ������� � ����." << endl;
	}
	else if (season == '2') {
		system("color 6");
		cout << "������ �����. �����, �����, ������." << endl;
	}
	else if (season == '3') {
		system("color 8");
		cout << "������ ����. �������, ��� �� ����� ����������� � �������� �������." << endl;
	}
	else if (season == '4') {
		system("color 2");
		cout << "������ �����. �� �� ���� ����������� ������ � �������� ����������~" << endl;
	}
	else {
		cout << "������... ���� �� ������ ���?\n";
	}
		return 0;
}