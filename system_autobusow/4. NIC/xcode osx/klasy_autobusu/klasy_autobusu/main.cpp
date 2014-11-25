#include "/Users/Szymon/Documents/Studia rok 2/Inżynieria Oprogramowania/inzyniernia/system_autobusow/4. NIC/xcode osx/klasy_autobusu/klasy_autobusu/zad.hpp"
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