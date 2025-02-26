#include <iostream>
using namespace std;

int main() 
{
    int n, i;

    cout << "Quanti atleti partecipano alla gara?" << endl;
    cin >> n;
    string nomi[n], nazionalita[n];
    float tempi[n];

    i = 0;
    while (i < n) {
        cout << "Qual'è il nome, la nazionalità e il tempo del " << i + 1 << "° atleta?" << endl;
        cin >> nomi[i];
        cin >> nazionalita[i];
        cin >> tempi[i];
        i = i + 1;
    }
    int min, imin;

    i = 0;
    min = (int) tempi[i];
    imin = 0;
    while (i < n) {
        if (tempi[i] < min) {
            min = (int) tempi[i];
            imin = i;
        }
        i = i + 1;
    }
    cout << "Il tempo più basso è " << tempi[imin] << " secondi." << endl;
    int max, imax;

    i = 0;
    max = (int) tempi[i];
    imax = 0;
    while (i < n) {
        if (tempi[i] > max) {
            max = (int) tempi[i];
            imax = i;
        }
        i = i + 1;
    }
    cout << "Il tempo più alto è " << tempi[imax] << " secondi." << endl;
    float somma, media;

    i = 0;
    somma = 0;
    while (i < n) {
        somma = somma + tempi[i];
        i = i + 1;
    }
    media = somma / n;
    cout << "La media dei tempi è " << media << " secondi." << endl;
    i = 0;
    while (i < n) {
        if (tempi[i] <= media) {
            cout << "Il " << i + 1 << "° atleta ha un tempo minore uguale alla media; di nome " << nomi[i] << ", di nazionalità " << nazionalita[i] << " e con un tempo di " << tempi[i] << " secondi." << endl;
        }
        i = i + 1;
    }
    float t;

    cout << "Digita un tempo." << endl;
    cin >> t;
    i = 0;
    while (i < n) {
        if (tempi[i] <= t) {
            cout << "Il " << i + 1 << "° atleta ha un tempo minore uguale alla variabile T assegnata dall'utente; di nome " << nomi[i] << ", di nazionalità " << nazionalita[i] << " e con un tempo di " << tempi[i] << " secondi." << endl;
        } else {
            cout << nomi[i] << " ha tempo maggiore alla variabile T assengata dall'utente." << endl;
        }
        i = i + 1;
    }
}
