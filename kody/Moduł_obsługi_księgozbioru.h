#include <exception>
using namespace std;

#ifndef __Modu�_obs�ugi_ksi�gozbioru_h__
#define __Modu�_obs�ugi_ksi�gozbioru_h__

#include "Modu�_rejestru_dzia�a�_biblioteki.h"

// class Modu�_rejestru_dzia�a�_biblioteki;
class Modu�_obs�ugi_ksi�gozbioru;

class Modu�_obs�ugi_ksi�gozbioru: public Modu�_rejestru_dzia�a�_biblioteki
{

	public: void dodanie_nowej_ksi��ki();

	public: void ewidencja_wypo�ycze�();

	public: void rezerwacja_ksi��ki();

	public: void usuni�cie_ksi��ki();

	public: void wypo�yczenie_ksi��ki();

	public: void zwrot_ksi��ki();

	public: void operation();
};

#endif
