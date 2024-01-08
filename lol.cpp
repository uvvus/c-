#include <iostream>
#include <stdlib.h>
#include <fstream>


using namespace std;

void Dodaj(int *n, int *p)
{

}

void Wstaw(int *n, int *p)
{
    int x;
    do
    {
        cout << "Numer indeksu gdzie chcesz wstawić element: ";
        cin >> x;
    }
    while(x >= *n);
    {
        int w;
        cin >> w;
        p[x] = w;
    }
}

void Usun(int *n, int *p)
{

}

void Wyswietl(int *n, int *p)
{
    cout << "Tablica: [";
    for(int i = 0; i > *n; i++)
    {
        cout << p[i] << ",";
    }
    cout << "]" << endl;
}

void Zapisz(int *n, int *p)
{

}

void Wczytaj(int *n, int *p)
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
    cout << " [5] Zapisz plik" << endl;
    cout << " [6] Wczytywanie pliku" << endl;
    cout << " [0] Wyjdz z programu" << endl;
    cout << "-------------------------" << endl;
    cout << "Wybierz opcje: ";

    cin >> opcja;

    return opcja;
}


int main()
{
    int *p = NULL;
    int n = 0;
    bool x = true;

    while(x == true)
        switch(menu())
        {
        case 1:
            {
                int * tmp = NULL;
                tmp = new int[n+1];
                if(p != NULL)
                {
                    for(int i=0;i<n;i++)
                    {
                        tmp[i] = p[i];
                    }

                    delete[] p;

                }
                cout << "Podaj wartosc elementu tablicy: ";
                cin >> tmp[n];
                p = tmp;
                n++;
                break;
            }
        case 2:
            cout << "test2" << endl;
            break;
        case 3:
            cout << "test3" << endl;
            break;
        case 4:
            cout << "test4" << endl;
            break;
        case 5:
            cout << "test5" << endl;
            break;
        case 6:
            cout << "test6" << endl;
            break;
        case 0:
            x = false;
            break;
        default:
            cout << "Wprowadz poprawna liczbe!" << endl;
    }

    return 0;
}
