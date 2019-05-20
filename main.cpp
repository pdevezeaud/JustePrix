#include <iostream>
#include "constantes.h"
#include "jeu.h"
#include "menu.h"
#include <windows.h>

using namespace std;


int main()
{



const auto CHOIX_JOUER{'j'};
const auto CHOIX_QUITTER{'q'};

  SetConsoleOutputCP(65001);

  cout << "Bienvenu au juste prix" <<endl;

  bool continuer{true};
  while(continuer) {

    afficherMenu();
  auto choix{ChoixMenu::JOUER};
  choix = demanderChoixMenu();

  switch(choix) {
    case ChoixMenu::JOUER:
        jouerParties(3000, BORNE_MAX);
        break;

    case ChoixMenu::JOUER_FACILE:
        jouerParties(250, BORNE_MAX_FACILE);
        break;

    case ChoixMenu::JOUER_TROIS_PARTIES:
        jouerParties(250, BORNE_MAX_FACILE);
        break;



    case ChoixMenu::QUITTER:
        cout << "Au revoir !!" <<endl;
        continuer = false;
        break;

    case ChoixMenu::INCORRECT:
    default:
        return EXIT_FAILURE;


  }

  }

    return EXIT_SUCCESS;
}

