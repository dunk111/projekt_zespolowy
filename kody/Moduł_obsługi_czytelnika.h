#include <exception>
using namespace std;

#ifndef __Modu�_obs�ugi_czytelnika_h__
#define __Modu�_obs�ugi_czytelnika_h__

#include "Modu�_rejestru_dzia�a�_biblioteki.h"

// class Modu�_rejestru_dzia�a�_biblioteki;
class Modu�_obs�ugi_czytelnika;

class Modu�_obs�ugi_czytelnika: public Modu�_rejestru_dzia�a�_biblioteki
{

	public: void dodanie_czytelnika();

	public: void modyfikuj_czytlenika();

	public: void filtruj_czytelnik�w();

	public: void usu�_czytlenika();

	public: void raport_czytlenik�w();
};

#endif
