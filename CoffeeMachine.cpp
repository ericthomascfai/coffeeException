//
// Created by eric on 04/01/2022.
//

#include <iostream>
#include "CoffeeMachine.h"

using namespace  std;

CoffeeMachine::CoffeeMachine():capacite(3),capacafe(2) {


}

void CoffeeMachine::insererPiece(float piece) {
if(piece==0.5)
{
    servir();
}
else
    throw "Piece invalide";
}

void CoffeeMachine::rechargerEau() {
capacite=3;
}

void CoffeeMachine::rechargerCafe() {
    capacafe=2;
}

void CoffeeMachine::servir() {

    if(capacafe>=0.10&&capacite>=0.15)
    {

        capacite-=0.15;
        capacafe-=0.10;
        cout<<"Le café est servi";
    }
    else
        if(capacafe<0.10)
            throw "plus de café";
        else
            if(capacite<0.15)
            {
                throw "plus d'eau";
            }



}


