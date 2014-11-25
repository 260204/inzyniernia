#include "zad.hpp"
using namespace std;

/*IPolaczenie* Wyszukiwanie::szukajPolaczenia() {
    IPolaczenie* listaPolaczen = (IPolaczenie*)new Polaczenie[10];
    return listaPolaczen;
}*/
void Wydruk::drukujPolaczenie(Polaczenie p)
{

}

void Polaczenie::drukuj() {
    Wydruk::drukujPolaczenie(*this);
}

int main()
{
	return 0;
}