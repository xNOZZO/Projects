#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[+] ��������� \"�������������� ������\"\n\n";
	cout << "[1] �������������\n";
	cout << "[2] �������\n";
	cout << "[3] �����\n";
	cout << "[+] �������� ������: ";

	int figure;
	cin >> figure;

	if (figure == 1) {
		system("cls");
		cout << "[1] �������������\n\n";
		cout << "[+] ������:";
		int len;
		cin >> len;

		cout << "[+] ������: ";
		int hei;
		cin >> hei;

		cout << "[+] ��������: ";
		char textur;
		cin >> textur;

		cout << "[+] A: �����������/ B: ������ \n";
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
		cout << "������� ������ ������ ��������: ";
		cin >> size;
		system("cls");
		cout << "�������� �������� ��������: ";
		cin >> texture;
		system("cls");
		cout << "[+]�������� ��� ��������: \n\n";
		cout << "[1] �����������\n";
		cout << "[2] ������\n";
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

		return 0;
	}
}