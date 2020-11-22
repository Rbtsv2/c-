#pragma once
#include "Arme.h"
#include <string>


class Arme
{

	public:
		Arme(); // constructor par default
		Arme(std::string nameArme, int degatsArme);
		int getDegats() const;
		void changer(std::string nom, int degats);
	
	private:
		std::string m_name;
		int m_degats;

};