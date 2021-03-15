#include<iostream>
#include<cmath>
#include<exception>
using namespace std;
void en_cas()
{
	cout << "Erreur valeur inconnu";
	exit(1);
}
int facto(int u)
{
	int z=1;
	for (int v = 1; v <= u; v++)
	{
		z = z * v;
	}
	return (z);
}
int main()
{
	int choix;
	cout << "Voici les different choix  il faut taper le numero situer a coter du choix :\n1:operation \n2:multiplication \n3:soustraction \n4:division \n5:racine carre d'un nombre \n6:Puissance d'un nombre \n7:Factorielle \n8:Log10 \n";
	cin >> choix;
	switch (choix)
	{
		case 1:
			cout << "Donner une valeur a x ";
			float a, b;
			cin >> a;
			if (cin.fail())
			{
				en_cas();
			}
			cout << "Donnez une valeur a y ";
			cin >> b;
			if (cin.fail())
			{
				en_cas();
			}
			cout << "Valeur de x + y = "<<a + b;
			break;

		case 2:
			cout << "Donner une valeur a x ";
			float c, d;
			cin >> c;
			if (cin.fail())
			{
				cout << "Erreur valeur inconnu";
				exit(1);
			}
			cout << "Donnez une valeur a y ";
			cin >> d;
			if (cin.fail())
			{
				en_cas();
			}
			cout << "Valeur de x * y"<<c*d;
			

		case 3:
			cout << "Donner une valeur a x ";
			float e, f;
			cin >> e;
			if (cin.fail())
			{
				en_cas();
			}
			cout << "Donner une valeur a y ";
			cin >> f;
			if (cin.fail())
			{
				en_cas();
			}
			cout << "Valeur de x-y" << e - f;
			break;

		case 4:
			float g;
			float h;
			cout << "Donner une valeur a x ";
			cin >> g;
			if (cin.fail())
			{
				en_cas();
			}
			cout << "Donner une valeur a y ";
			cin >> h;
			if (cin.fail())
			{
				en_cas();
			}
			try
			{
				if (h == 0)
				{
					throw domain_error("Impossible de diviser par zero");
				}
				cout << "Valeur de x/y " << g / h << endl;
				
			}
			catch (exception & ex)
			{
				cerr << ex.what();
			}
			break;
			
		case 5:
			int i;
			cout << "Donner une valeur a x ";
			cin >> i;
			
			try
			{
				if (i < 0)
					throw domain_error("La racine caree d un nombre negatif n existe pas ");
				cout << "La racine caree de " << i << " est " << sqrt(i);
			}
				catch (exception &e)
				{
					cerr << e.what();
				}
				break;
		case 6:
			cout << "Donner une valeur a x";
			int j;
			int k;
			cin >> j;
			cout << "Donner une valeur a la puissance x";
			cin >> k;
			cout << "La puissance de " << j << " est " << pow(j, k);

		case 7:
			int w;
			cout << "Saisir votre nombre";
			cin >> w;
			cout<<" "<<facto(w);
			break;
			
		case 8:
			double ln;
			int rep;
			cout << "Sasir votre nombre" << endl;
			cin >> rep;
			ln = log10(rep);
			cout << " " << ln << endl;
			break;
		
		default:
			cout << "Erreur " << endl ;
	}
}