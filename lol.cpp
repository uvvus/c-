#include <iostream>
#include <stdlib.h>


using namespace std;

void Dodaj(int *n, int *p)
{

}

void Wstaw(int *n, int *p)
{

}

void Usun(int *n, int *p)
{

}

void Wyswietl(int *n, int *p)
{

}


int menu()
{
    int opcja;
    system("cls");
    cout << "Menu" << endl;
    cout << "-------------------------" << endl;
    cout << " [1] Dodaj element" << endl;
    cout << " [2] Wstaw element" << endl;
    cout << " [3] Usun element" << endl;
    cout << " [4] Wyswietl tablice" << endl;
    cout << " [5] Wyjdz z programu" << endl;
    cout << "-------------------------" << endl;
    cout << "Wybierz opcje: ";

    cin >> opcja;

    return opcja;
}


int main()
{
    int *p = NULL;
    bool x = true;
    while(x == true)
        switch(menu())
        {
        case 1:
            cout << "test" << endl;
            break;
        case 2:
            cout << "test" << endl;
            break;
        case 3:
            cout << "test" << endl;
            break;
        case 4:
            cout << "test" << endl;
            break;
        case 5:
            x = false;
            break;
        default:
            cout << "Wprowadz poprawna liczbe!" << endl;
    }




    return 0;
}
