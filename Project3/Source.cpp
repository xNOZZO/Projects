#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	setlocale(0, "");

	int n1;
	cout << "������� ������ �����: " << endl;
	cin >> n1;
	int n2;
	system("cls");
	cout << "������� ������ �����: " << endl;
	cin >> n2;
	system("cls");
	cout << "[+] �������� ��������: \n";
	cout << "[1] +\n";
	cout << "[2] -\n";
	cout << "[3] *\n";
	cout << "[4] /\n";
	cout << "[5] %\n";
		int operation;
		cin >> operation;

	double res = 0;
	if (operation == 1) {
		res = n1 + n2;
		system("cls");
		cout << "���������: " << n1 << " + " << n2 << " = " << res;
	}

	else if (operation == 2) {
		res = n1 - n2;	
		system("cls");
		cout << "���������: " << n1 << " - " << n2 << " = " << res;
	}

	else if (operation == 3) {
		res = n1 * n2;
		system("cls");
		cout << "���������: " << n1 << " * " << n2 << " = " << res;
	}

	else if (operation == 4) {
		if (n2 == 0) {
			cout << "������� �� ���� = ���� ������. �� ���� :(" << endl;
			return 0;
		}
		res = n1 / n2;
		system("cls");
		cout << "���������: " << n1 << " / " << n2 << " = " << res;
	}

	else if (operation == 5) {
		res = n1 % n2;
		system("cls");
		cout << "���������: " << n1 << " % " << n2 << " = " << res;
	}

	else {
		cout << "׸?((";
	}
	return 0;

}