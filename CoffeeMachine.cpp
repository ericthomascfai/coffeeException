//
// Created by eric on 04/01/2022.
//

#include <iostream>
#include "CoffeeMachine.h"

using namespace  std;

CoffeeMachine::CoffeeMachine():capacite(3),capacafe(2) {


}

void CoffeeMachine::rechargerCafe() {

}

void CoffeeMachine::insererPiece(float piece) {
if(piece==0.5)
{
    servir();
}
else
    throw "Piece invalide";
}


