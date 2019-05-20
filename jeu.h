#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED

#include <iostream>
#include "constantes.h"

inline void demanderPropostion(int& proposition){
std::cin >> proposition;
}

void jouerParties(int leJustePrix, int max);
void jouerTroisParties();



#endif // JEU_H_INCLUDED
