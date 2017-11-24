#include "ServicoEmergencia.h"
ServicoEmergencia::ServicoEmergencia(){}

void ServicoEmergencia::addAcidente(Acidente * a) {
	acidentes.push_back(a);
}
void ServicoEmergencia::addPostoSocorro(PostoDeSocorro *p) {
	postosSocorro.push_back(p); 
}

void ServicoEmergencia::printAcidentes() {
	for (unsigned int i = 0; i < acidentes.size(); i++) {
		acidentes[i]->printAcid(); 
	}
}

//void ServicoEmergencia::printPostos() {
	/*	for (int i = 0; i < postosSocorro.size(); i++){
	postosSocorro[i]->printPostos();		}		//dynamic_cast<PostosDeSocorro *> */
//}


<<<<<<< HEAD
/*void tratamentoDeAcidentes(Acidente a) {
	Incendio * pba = new Incendio;
=======
void ServicoEmergencia::tratamentoDeAcidentes(Acidente * a) {

	if (!(dynamic_cast<Incendio*> (a)))			// ve se a e incendio
	{
		
		//tratamentoDeIncendios(a);
	}
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d

	if (!(dynamic_cast<Assalto*> (a)))			// ve se a e assalto
	{

	}

	if (!(dynamic_cast<AcidenteViacao*> (a)))			// ve se a e acidviacao
	{

	}
}

void ServicoEmergencia::tratamentoDeIncendios(Acidente *a) {
	vector <PostoDeSocorro *> bomb = getBombeiros();
	double min = 99999;
	int j = 0;
	double x = a->getx(), y = a->gety();
	for (unsigned int i = 0; i < bomb.size(); i++)
	{
		if (min >= bomb[i]->getProximidade(x,y))
		{
			j = i;
			min = bomb[i]->getProximidade(x, y);
		}
	}
	if ((bomb[j]->tratamentoDeIncendios(a)) == 0) {
		removeAcidente(a);
		return;
	}
		
	cout << "Nao foi possivel o tratamento deste acidente!!";
	return;
}


vector <PostoDeSocorro *> ServicoEmergencia::getBombeiros() {
	vector <PostoDeSocorro *> p;
	for (unsigned int i = 0; i < postosSocorro.size(); i++)
	{
		PostoDeSocorro * a;
		a = postosSocorro[i];
		if (dynamic_cast<Bombeiros*> (a))
			p.push_back(a);
	}
	return p;
}

vector <PostoDeSocorro *> ServicoEmergencia::getINEM() {
	vector <PostoDeSocorro *> p;
	for (unsigned int i = 0; i < postosSocorro.size(); i++)
	{
		PostoDeSocorro * a;
		a = postosSocorro[i];
		if (dynamic_cast<INEM*> (a))
			p.push_back(a);
	}
	return p;
}
vector <PostoDeSocorro *> ServicoEmergencia::getPolicia() {
	vector <PostoDeSocorro *> p;
	for (unsigned int i = 0; i < postosSocorro.size(); i++)
	{
		PostoDeSocorro * a;
		a = postosSocorro[i];
		if (dynamic_cast<Policia*> (a))
			p.push_back(a);
	}
	return p;
}

void ServicoEmergencia::removeAcidente(Acidente *a) {
	for (unsigned int i = 0; i < acidentes.size(); i++)
	{
		if (acidentes[i] == a) {
			acidentes.erase(acidentes.begin(), acidentes.begin() + i);
			cout << "Acidente removido\n";
			return;
		}
	}
<<<<<<< HEAD
}
*/
=======
	cout << "Nao foi possivel remover o acidente\n";
	return;
}
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
