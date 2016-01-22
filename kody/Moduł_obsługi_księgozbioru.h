#include <exception>
using namespace std;

#ifndef __Modu³_obs³ugi_ksiêgozbioru_h__
#define __Modu³_obs³ugi_ksiêgozbioru_h__

#include "Modu³_rejestru_dzia³añ_biblioteki.h"

// class Modu³_rejestru_dzia³añ_biblioteki;
class Modu³_obs³ugi_ksiêgozbioru;

class Modu³_obs³ugi_ksiêgozbioru: public Modu³_rejestru_dzia³añ_biblioteki
{

	public: void dodanie_nowej_ksi¹¿ki();

	public: void ewidencja_wypo¿yczeñ();

	public: void rezerwacja_ksi¹¿ki();

	public: void usuniêcie_ksi¹¿ki();

	public: void wypo¿yczenie_ksi¹¿ki();

	public: void zwrot_ksi¹¿ki();

	public: void operation();
};

#endif
