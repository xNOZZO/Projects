#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[+] ��������� - '�������������� ������'" << endl << endl;
	cout << "[1] �����\n\n";
	cout << "[+] �������� ������: ";

	int figure;
	int form;

	int linelenght;
	char linetexture;

	int a = 0;
	int b = 0;

	cin >> figure;
	if (figure == 1) {
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
	}
	else {
		cout << "����� ����� ����� �� ����������. ����� ����� ��\n";
		Sleep(2000);
		return 0;
	}
	return 0;
}