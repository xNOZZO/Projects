#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "[-] ����: -- ���� �� ������� ����������?.." << endl << endl;
	cout << "[1] �����\n";
	cout << "[2] �wa����\n";
	int choise;
	cin >> choise;

	if (choise == 1) {

		int form;

		int linelenght;
		char linetexture;

		int a = 0;
		int b = 0;
		system("cls");
		cout << "�������� ���: \n\n";
		cout << "[1] ��������������" << endl;
		cout << "[2] ������������" << endl << endl;
		cout << "-> ������� ��������: ";
		cin >> form;
		if (form == 1) {
			system("cls");
			cout << "[+] ������� ����� �����: ";
			cin >> linelenght;
			system("cls");
			cout << "[+] ������� �������� �����: ";
			cin >> linetexture;
			system("cls");
			while (a < linelenght) {
				cout << linetexture;
				a++;
			}
		}
		else if (form == 2) {
			system("cls");
			cout << "[+] ������� ����� �����: ";
			cin >> linelenght;
			system("cls");
			cout << "[+] ������� �������� �����: ";
			cin >> linetexture;
			system("cls");
			while (b < linelenght) {
				cout << linetexture << "\n";
				b++;
			}
		}
		else {
			cout << "����� ����� ����� �� ����������. ����� ����� ��\n";
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
		cout << "������� ������ ������ ��������: ";
		cin >> size;
		system("cls");
		cout << "�������� �������� ��������: ";
		cin >> texture;
		system("cls");
		cout << "[_]�������� ��� ��������: \n\n";
		cout << "[1] �����������\n";
		cout << "[2] ������\n";
		cout << "[3] �����!!! �������\n";
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
