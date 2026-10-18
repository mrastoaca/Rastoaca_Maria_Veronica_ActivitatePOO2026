#include <iostream>
using namespace std;

struct Cladire {
    char* culoare;
    float inaltime;
    int nrEtaje;
    bool deschis;
};

Cladire citireCladire() {
    Cladire c;
    char x[100];
    cout << " Culoare:";
    cin >> x;
    c.culoare = new char[strlen(x) + 1];
    strcpy_s(c.culoare, strlen(x) + 1, x);
    cout << "\nInaltime:";
    cin >> c.inaltime;
    cout << "\nnrEtaje:";
    cin >> c.nrEtaje;
    cout << "\n deschis(0/1):";
    cin >> c.deschis;
    return c;
}

void afisareCladire(Cladire c)
{
    cout << "Culoarea este:" << c.culoare;
    cout << "\nInaltimea este:" << c.inaltime;
    cout << "\nNr. etaje:" << c.nrEtaje;
    cout << "\neste deschisa:" << c.deschis;
}

void modificaNrEtaje(int noulNrEtaje, Cladire* c) {//cel pe care il modific e prin adresa
    (*c).nrEtaje = noulNrEtaje;//am facut dereferentiere pin *;accesarea se face prin .
}

void modificaNrEtajePrinReferinta(int noulNrEtaje, Cladire& c) {//aici se face modificare prin referinte, nu se mai face dereferentiere manual
    c.nrEtaje = noulNrEtaje;
}

void main() {
    Cladire c = citireCladire();
    afisareCladire(c);
    modificaNrEtaje(25, &c);
    afisareCladire(c);
    modificaNrEtajePrinReferinta(21, c);
    afisareCladire(c);
    /*char* vectorC;
    vectorC = new char[strlen("POO") + 1];
    strcpy_s(vectorC, strlen("POO") + 1, "POO");

    Cladire c;
    int nrCladiri = 5;
    Cladire* cladiri;
    cladiri = new Cladire[nrCladiri];*/
}