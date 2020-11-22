
#include <iostream>
#include <vector> // pour utilisre les tableaux dynamiques
#include "math.h"
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "Personnage.h"
using namespace std;



void dessineRectangle(int l, int h)
{
	for (int ligne(0); ligne < h; ligne++)
	{
		for (int colonne(0); colonne < l; colonne++)
		{
			cout << "*";
		}
		cout << endl;
	}
}


void helloWorld()
{
	cout << "This is a function who says Hello World ! \n";
}

string melangeMot(string mot)
{
	string newRandomWord;

	srand(time(0)); // initialiser le randon time
	while (mot.size()) // il parcours tous les octets du fichier 
	{
		int position = rand() % mot.size(); // On genere une position aléatoire et on incremente dans la string
		newRandomWord += mot[position];
		mot.erase(position, 1);
	}
	return newRandomWord;
}


int main()
{

	Personnage goliot("Epee eguisee", 50), david;

	cout << "La vie de Devid est : " << david.vie() << endl;

	goliot.attaquer(david);

	cout << "David s est fait attaquer par goliot maintenant la vie de Devid est : " << david.vie() << endl;



	// declaration d'un pointeur : c'est l adresse memoire d'une variable constante 

	//int *adresse(0); // toujours l'initialiser à 0 et cette declaration permettra de recevoir l'adresse memoire de la variable declaré
	//int number = 5;
	//adresse = &number; // On assigne l'adresse mémoire de la variable number à la variable adresse



	//cout << "La valeur de la varible du pointeur : " << *adresse  << endl;

	//// jeux du mot mystere 
	//string motMystere, newRandomWord, motClient;

	//cout << "Saississez un mot : \n";
	//cin >> motMystere;

	//newRandomWord = melangeMot(motMystere);


	//cout << "Mot au hasard : " << newRandomWord << endl;

	//do
	//{
	//	cout << "Quel est ce mot ? : \n";
	//	cin >> motClient;

	//	if (motMystere == motClient)
	//	{
	//		cout << "Bravo !";
	//	}
	//	else {
	//		cout << "Et non, pas bon :/";
	//	}

	//} while (newRandomWord != motClient);




	//motMystere.erase(position, 1); // 2 arguments le premier la position et le deuxieme le nombre de lettre que l'on souhaite supprimer
   
	

	// on melange les caracteres du mots





	//helloWorld();

	//int firstNumber(0), secondNumber(0), result(0), num(0); // on creer les cases memoires pour les nombres 
	//cout << "Veuillez rensiegner le premier nombre : \n";
	//cin >> firstNumber;
	//cout << "Veuillez renseigner le second nombre :\n";
	//cin >> secondNumber;


	//dessineRectangle(firstNumber, secondNumber);
	//int resultat(firstNumber + secondNumber);

	//cout << "Le resultat est : " << resultat << endl;
	//num = ajouteDeux(resultat);
	//
	//cout << " + 2 : " << num << endl;

	//string const monfichier("C:/Users/hacker/Desktop/test.txt"); // On enregistre le chemin absolue ( de la racine au fichier )

	//ofstream monflux(monfichier.c_str(), ios::app); // declaration d'un flux permettant d'ouvrir et ecrire dans le fichier  

	//// On teste l'ouverture du fichier 

	//if (monflux)
	//{
	//	int positionInitial = monflux.tellp();
	//	// tout est ok
	//	monflux << "Flux generer en c++ " << endl;
	//	monflux << "voici le resultat de la console : " << resultat << endl;

	//	int position = monflux.tellp();

	//	cout << "la position de votre curseur au sein du fichier est :" << positionInitial << endl;
	//}
	//else {
	//	cout << "Il y a une merde lors de l ouverture du fichier" << endl;
	//}


	//string fichierLire("C:/Users/hacker/Desktop/lu.txt");

	//ifstream fluxFichierLire(fichierLire);

	//if (fluxFichierLire)
	//{

	//	//// on veut connaitre la taille du ficheir 
	//	//fluxFichierLire.seekg(0, ios::end);

	//	//int taille;
	//	//taille = fluxFichierLire.tellg();

	//	//cout << "taille du fichier" << taille << endl;

	//	cout << "ok pour la lecture\n";

	//	string line;

	//	while (getline(fluxFichierLire, line))
	//	{
	//		cout << line << endl;
	//	}

	//
	//}
	//else
	//{
	//	cout << "erreur de lecture du fichier";
	//}


	return 0;
	
   
}






