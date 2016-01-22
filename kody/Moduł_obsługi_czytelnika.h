#include <exception>
using namespace std;

#ifndef __Modu³_obs³ugi_czytelnika_h__
#define __Modu³_obs³ugi_czytelnika_h__

#include "Modu³_rejestru_dzia³añ_biblioteki.h"

// class Modu³_rejestru_dzia³añ_biblioteki;
class Modu³_obs³ugi_czytelnika;

class Modu³_obs³ugi_czytelnika: public Modu³_rejestru_dzia³añ_biblioteki
{

	public: void dodanie_czytelnika();

	public: void modyfikuj_czytlenika();

	public: void filtruj_czytelników();

	public: void usuñ_czytlenika();

	public: void raport_czytleników();
};

#endif
