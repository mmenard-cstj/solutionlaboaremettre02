//�crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une
//automobile lou�e.
//auteur:Matthew M�nard
//2020-09-15

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// d�claration des variables
	float jour;
	float km;
	float litre = 0;
	float argent =0 ;

	// demander les jours et le nombre de kilometres 

	std::cout << "combien de jour la voiture est elle lou�? ";
	std::cin >> jour;
	std::cout << "combien de kilometres parcouru? ";
	std::cin >> km;
	/*o Co�t de la location de 45$ par jour et comprend 250 km gratuits par jour.
		o La consommation du v�hicule est 7.6 litres aux 100 km.
		o 1 litre d�essence co�te 1.25$
		o 0.05$ du kilom�tre est exig� pour chaque kilom�tre suppl�mentaire.*/



	litre = + 0.076 * km;//nombre de litre par km
	km - (250 * jour)== km; //250 km gratuit par jour
	
							//argent =  (0.05 * km);// argent par km de trop
	//km - 250 * jour; //250 km gratuit par jour

	//argent =  (1.25 * litre); //cout du gaz
	
	


	if (jour >= 1) 
	{
		argent +(45 * jour) + (0.05 * km) + (1.25 * litre); //prix par jour, par km de trop et litre



		std::cout << " litre " << litre; //�noncer le nombre de litre
		std::cout << "  Le cout total est de  " << argent << " $"; //�noncer le prix
	}
	else
	{
		std::cout << " invalide! veullez entrer plus qu'une journ�e �: louer.";//si aucune location n'est fait!
	}

	return 0;
}

/* plan test

jour             km           prix
3                2460         491,70

1                0            45

0                  0           invalide
1                  2            45.29

0                1               invalide

*/