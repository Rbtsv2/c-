#include "Arme.h"
#include <string>
using namespace std;



Arme::Arme()
{
	m_degats = 10;
	m_name = "Baton de bois";
}

Arme::Arme(std::string nameArme, int degatsArme) : m_name(nameArme), m_degats(degatsArme)
{
		
}

int Arme::getDegats() const
{
	return m_degats;
}



void Arme::changer(std::string nomNouvelleArme, int degatsNouvelleArme)
{
	m_degats = degatsNouvelleArme;
	m_name = nomNouvelleArme;
}

