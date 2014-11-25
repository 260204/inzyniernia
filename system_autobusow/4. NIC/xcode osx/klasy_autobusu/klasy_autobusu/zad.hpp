#ifndef _ZAD
#define _ZAD
#include <string>
#include <ctime>

using namespace std;

class Wydruk {
public:
    static void drukujPolaczenie(Polaczenie p);
};

class IPolaczenie {
public:
    virtual string* pobierzSzczegoly()=0;
    virtual void drukuj()=0;
};
class Wyszukiwanie:IPolaczenie {
private:
    string przystanekPoczatkowy;
    string przystanekKoncowy;
    time_t data;
    int liczbaPrzesiadek;
public:
    Wyszukiwanie(string pP, string pK, time_t d, int IP);
    IPolaczenie* szukajPolaczenia();
};
class Polaczenie:IPolaczenie {
private:
    time_t czasOdjazdu;
    time_t czasPrzyjazdu;
    string miejscePrzyjazdu;
    string miejsceOdjazdu;
public:
    Polaczenie(time_t cO, time_t cP, string mP, string mO);
    string* pobierzSzczegoly();
    void drukuj()
    {
        Wydruk::drukujPolaczenie(*this);
    };
};

class PolaczenieBezposrednie:Polaczenie {
private:
    float dlugoscTrasy;
    float prowizorycznaCenaBiletu;
public:
    PolaczenieBezposrednie(time_t cO, time_t cP, string mP, string mO, float dT, float pCB): Polaczenie(cO, cP, mP, mO), dlugoscTrasy(dT), prowizorycznaCenaBiletu(pCB) {}
    string* pobierzSzczegoly();
    void drukuj();
};
class MiejscePrzesiadki {
private:
    string miejscowosc;
    int peronPrzyjazdu;
    int peronOdjazdu;
public:
    MiejscePrzesiadki(string m, int pP, int pO);
};
class PolaczeniePosrednie:Polaczenie {
private:
    MiejscePrzesiadki miejscePrzesiadki;
    time_t czasPrzesiadki;
public:
    PolaczeniePosrednie(time_t cO, time_t cP, string mP, string mO, MiejscePrzesiadki miejsce, time_t czasP): Polaczenie(cO, cP, mP, mO), miejscePrzesiadki(miejsce), czasPrzesiadki(czasP) {}
    string* pobierzSzczegoly();
    void drukuj();
};

#endif // _ZAD
