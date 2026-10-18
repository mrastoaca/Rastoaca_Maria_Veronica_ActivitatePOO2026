#include <iostream>

using namespace std;
struct Cladidire {
	unsigned char numar;
	char* culoare;
	float inaltime;
	int nr_etaje;
	bool este_deschisa;
};

void afisareCladire(afisareCladire a) {
	cout << a.inaltime << " " a.este_deschisa << " " << a.nr_etaje << " " << a.numar << " " << a.culoare << endl;

}
void main() {
	std::cout << "hello world" << std::endl;
	Cladire c;
	cout << sizeof(c);
	c.inaltime = 30.4;
	c.este_deschisa = true;
	c.nr_etaje = 10;
	c.numar = 'A';
	c.culoare = new char[strlen("Maro") + 1];
	strcpy_s(c.culoare, strlen("Maro") + 1, "Maro");
	afisareCladire(c);
	delete[] c.culoare;
}
