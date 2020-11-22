#pragma once
#include "Personnage.h"
#include <string>

#include "Arme.h"


class Personnage {

	public :
	
		Personnage();
		Personnage(std::string monArme, int degatsArme);
		~Personnage(); // on met en place le detructeur

		void recevoirDegats(int nbDegats);
		void attaquer(Personnage& cible); // passage par reference ou alias
		void boirePotionDeVie(int quantititePotion);
		void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
		bool estViavant() const;
		int vie();


	private:
		int m_vie;
		int m_mana;
		Arme m_arme; // Notre personnage possede une arme
};