#pragma once

#include "Acidentes.h"



class PostoDeSocorro {
	friend class Acidente;
protected:
	int numSocorristas;
	int numVeiculos;
	string local;
	pair<int, int> coord;
public:
	PostoDeSocorro(int numSocorristas, int numVeiculos, string local, int x, int y);
	void setNumVeiculos(int numVeiculos);
	//virtual string tipo() = 0;
	//virtual void printPostos();
};


class Bombeiros : public PostoDeSocorro {
private:
	int numAmbulancias;
	int numAutotanques;
public:
	Bombeiros(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numAutotanques);
	//string tipo() = 0;
	void printPostos();
};

class Policia : public PostoDeSocorro {
private:
	int numCarros;
	int numMotos;
public:
	Policia(int numSocorristas, int numVeiculos, string local, int x, int y, int numCarros, int numMotos);
	//string tipo() = 0;
	void printPostos();
};

class Inem : public PostoDeSocorro {
private:
	int numAmbulancias;
	int numCarro;
	int numMoto;
public:
	Inem(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numCarro, int numMoto);
	void PrintPostos();
};
