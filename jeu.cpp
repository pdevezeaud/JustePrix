#include <iostream>
#include "constantes.h"
#include "jeu.h"

using namespace std;


//***********************************************************

void jouerParties(int leJustePrix, int max){
  auto proposition{0};
  auto nombreTentatives(0);

  do {
          cout << "Proposition ?";
          cin >> proposition;
          if (proposition >=BORNE_MIN && proposition < max){
          nombreTentatives++;
          if(proposition == leJustePrix){

          cout << "Bravo !!" <<endl;
          cout << "C'est gagné !" <<endl;
          }
        else if(proposition > leJustePrix){
            cout << "C'est moins !!" << endl;
        } else{
            cout << "C'est plus !!" << endl;
        }
    }

  }while(proposition != leJustePrix && proposition >= BORNE_MIN);

  if(proposition == leJustePrix) {
    cout << "Partie Terminée !! " << "en " << nombreTentatives << " tentatives" << endl;
  }else {
  cout << "Partie abandonnée... !! " << endl;
     }
}

//*************************************************************


void jouerTroisParties(){

  cout << "C'est parti !!" <<endl;
  for(auto aDeviner :{2019, 42, 1984} ){
        jouerParties(aDeviner,BORNE_MAX);

   }
 }
