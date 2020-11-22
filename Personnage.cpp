#include "Personnage.h"
#include <string>
using namespace std;


Personnage::~Personnage()
{

}

Personnage::Personnage() : m_vie(100), m_mana(100), m_arme("Baton de bois", 10)
{
}

/**
* Methode permettant de passer en parametre monArme et les degats de l'arme
*/
Personnage::Personnage(string monArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(monArme, degatsArme)
{
}

int Personnage::vie()
{
	return m_vie;
}


void Personnage::recevoirDegats(int nbdegats)
{
	m_vie -= nbdegats;

	if (m_vie < 0)
	{
		m_vie = 0;
	}
}

void Personnage::attaquer(Personnage &cible)
{
	cible.recevoirDegats(m_arme.getDegats());

}

void Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie += quantitePotion;

	if (m_vie > 100)
	{
		m_vie = 100;
	}

}

void Personnage::changerArme(string nomNouvellArme, int degatsNouvelleArme)
{

	m_arme.changer(nomNouvellArme, degatsNouvelleArme);

}

bool Personnage::estViavant() const
{
	return m_vie > 0;

}