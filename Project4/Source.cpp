#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[+] �������� �����: \n";
	cout << "[1] ������\n";
	cout << "[2] �������\n";
	cout << "[3] ����\n";
	cout << "[4] ������\n";
	cout << "[5] ���\n";
	cout << "[6] ����\n";
	cout << "[7] ����\n";
	cout << "[8] ������\n";
	cout << "[9] ��������\n";
	cout << "[10] �������\n";
	cout << "[11] ������\n";
	cout << "[12] �������\n";
	int choise;
	cin >> choise;
	switch (choise) {
	case 1:
		cout << "������ �����: ������";
		break;
	case 2: 
		cout << "������ �����: �������";
		break;
	case 3:
		cout << "������ �����: ����";
		break;
	case 4: 
		cout << "������ �����: ������";
		break;
	case 5:
		cout << "������ �����: ���";
		break;
	case 6: 
		cout << "������ �����: ����";
		break;
	case 7:
		cout << "������ �����: ����";
		break;
	case 8:
		cout << "������ �����: ������";
		break;
	case 9: 
		cout << "������ �����: ��������";
		break;
	case 10:
		cout << "������ �����: �������";
		break;
	case 11:
		cout << "������ �����: ������";
		break;
	case 12:
		cout << "������ �����: �������";
		break;
	default:
		cout << "������ ������ �� ����������!";
		break;
		return 0;
	}
	return 0;
}