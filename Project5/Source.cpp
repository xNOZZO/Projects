#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[+] ����������\n";
	cout << "[1] ������� �����\n";    
	cout << "[2] ���������� �����\n\n";
	cout << "[3] �����\n";

	int choise;
	int rus;
	cout << "������� ��������: ";
		cin >> choise;
		system("cls");

		switch (choise) {
		case 1: 
			cout << "���������� ������� -> ����������.\n������ ������� ����: \n\n";
			cout << "[1] ���\n";
			cout << "[2] ���\n";
			cout << "[3] �����\n";
			cout << "[4] ������\n";
			cout << "[5] �����������\n";
			cout << "[6] ����������\n";
			cout << "[7] ����\n";
			cout << "[8] ������\n";
			cout << "[9] ��������\n";
			cout << "[10] ������\n";
			cout << "[11] ��\n";
			cout << "[12] ������\n";
			cout << "[13] ������\n";
			cout << "[14] ������\n";
			cout << "[15] �������\n\n";
			cout << "[-] ������� ��������: ";
			cin >> rus;
			system("cls");
			switch (rus) {
			case 1:
				cout << "��� -> Sword\n\n\n\n\n";
				break;
			case 2:
				cout << "��� -> Ball\n\n\n\n\n";
				break;
			case 3:
				cout << "����� -> Bomb\n\n\n\n\n";
				break;
			case 4: 
				cout << "������ -> Death\n\n\n\n\n";
				break;
			case 5:
				cout << "����������� -> Apocalypse\n\n\n\n\n";
				break;
			case 6:
				cout << "���������� -> Pervent\n\n\n\n\n";
				break;
			case 7:
				cout << "���� -> Bullet\n\n\n\n\n";
				break;
			case 8:
				cout << "������ -> Killer\n\n\n\n\n";
				break;
			case 9:
				cout << "�������� -> Handgun\n\n\n\n\n";
				break;
			case 10:
				cout << "������ -> Metal\n\n\n\n\n";
				break;
			case 11:
				cout << "�� -> Poison\n\n\n\n\n";
				break;
			case 12:
				cout << "������ -> Nikita\n\n\n\n\n";
				break;
			case 13:
				cout << "������ -> Chinese\n\n\n\n\n";
				break;
			case 14:
				cout << "������ -> Japanese\n\n\n\n\n";
				break;
			case 15:
				cout << "������� -> Russian\n\n\n\n\n";
			default: {
				cout << "������ ����� ������� ��� :(";
				Sleep(3500);
				return 0;
			}
				break;
			}
		case 2:
			cout << "���������� ���������� -> �������.\n������ ���������� ����: \n\n";
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
			cout << "[-] �������� ��������: ";
			cin >> rus;
			system("cls");
			switch (rus) {
			case 1:
				cout << "Sword -> ���\n\n\n\n\n";
				break;
			case 2:
				cout << "Ball -> ���\n\n\n\n\n";
				break;
			case 3:
				cout << "Bomb -> �����\n\n\n\n\n";
				break;
			case 4:
				cout << "Death -> ������\n\n\n\n\n";
				break;
			case 5:
				cout << "Apocalypse -> �����������\n\n\n\n\n";
				break;
			case 6:
				cout << "Pervent -> ����������\n\n\n\n\n";
				break;
			case 7:
				cout << "Bullet -> ����\n\n\n\n\n";
				break;
			case 8:
				cout << "Killer -> ������\n\n\n\n\n";
				break;
			case 9:
				cout << "Handgun -> ��������\n\n\n\n\n";
				break;
			case 10:
				cout << "Metal -> ������\n\n\n\n\n";
				break;
			case 11:
				cout << "Poison -> ��\n\n\n\n\n";
				break;
			case 12:
				cout << "Nikita -> ������\n\n\n\n\n";
				break;
			case 13:
				cout << "Chinese -> ������\n\n\n\n\n";
				break;
			case 14:
				cout << "Japanese -> ������\n\n\n\n\n";
				break;
			case 15:
				cout << "Russian -> �������\n\n\n\n\n";
				break;
			default: {
				cout << "������ ����� ������� ��� :(";
				Sleep(3500);
				return 0;
			}
				break;
			}
			break;
		case 3:
			cout << "�����";
			Sleep(600);
			system("cls");
			cout << "�����.";
			Sleep(600);
			system("cls");
			cout << "�����..";
			Sleep(600);
			system("cls");
			cout << "�����...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			Sleep(1000);
			exit;
			break;
		default: {
			cout << "�����.\n\n\n\n\n";
			Sleep(2000);
			return 0;
		}
		}


	return 0;
}