#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    setlocale(0, "");

    int massint[10] = { 0,1,2,3,4,5,6,7,8,9 };

    char masschar[10] = { 'A','B','C','D','E','F','G','H','I','J' };

    long masslong[10] = {10,11,12,13,14,15,16,17,18,19, };

    short massshort[10] = { 10,11,12,13,14,15,16,17,18,19 };

    bool massbool[10] = {true,false,true,false,true,false,true,false,false,true };

    string massstring[10] = {"Black","Women","Are","Hot","Just","Like","A","Magma","Block","Dude" };

    float massfloat[10] = {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,1.99 };

    double massdouble[10] = {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,1.10};

    cout << "\t\n1 - Int" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << "\t" << massint[i] << "\n";

    }
    cout << "\t\n2 - Char" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << "\t" << masschar[i] << "\n";
    }
    cout << "\t\n3 - Long" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << "\t" << masslong[i] << "\n";
    }
    cout << "\t\n4 - Short" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << "\t" << massshort[i] << "\n";
    }
    cout << "\t\n5 - Bool" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << "\t" << massbool[i] << "\n";
    }
    cout << "\t\n6- String" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << "\t" << massstring[i] << "\n";
    }
    cout << "\t\n7- Float" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << "\t" << massfloat[i] << "\n";
    }
    cout << "\t\n8- Double\n";
    for (int i = 0; i < 10; i++) {
        cout << "\t" << massdouble[i] << "\n";
    }
    int quit;
    cout << "\n\n\n\t\tЧтобы выйти, нажмите 1: ";
    cin >> quit;
    if (quit == 1) {
        system("cls");
        return 0;
    }
    else {
        cout << "Не то нажал, но тоже сойдёт.";
        system("cls");
        return 0;
    }
}