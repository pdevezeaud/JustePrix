#include <iostream>>
#include "constantes.h"
#include "menu.h"
#include "jeu.h"

using namespace std;

ChoixMenu demanderChoixMenu(){

  char saisieChoix;
  cin >> saisieChoix;

  if(saisieChoix == static_cast<char>(ChoixMenu::JOUER) || saisieChoix == static_cast<char>(ChoixMenu::JOUER_FACILE)
     ||saisieChoix == static_cast<char>(ChoixMenu::JOUER_TROIS_PARTIES) || saisieChoix == static_cast<char>(ChoixMenu::QUITTER)){

        return static_cast <ChoixMenu>(saisieChoix);
  }else {

    return ChoixMenu::INCORRECT;
  }

}

//*********************************************

void afficherMenu(){
 // attend un caractere et n'est pas prévu d'attendre autre type de donnee  ChoixMenu
  cout << static_cast<char>(ChoixMenu::JOUER)<< " : Jouer " << endl;
  cout << static_cast<char>(ChoixMenu::JOUER_FACILE)<< " : Jouer facile" << endl;
  cout << static_cast<char>(ChoixMenu::JOUER_TROIS_PARTIES)<< " : Jouer 3 parties" << endl;
  cout << static_cast<char>(ChoixMenu::QUITTER)<< " : Quitter" << endl;

 }



