//
// Created by eric on 04/01/2022.
//

#ifndef COFFEEEXCEPTION_COFFEEMACHINE_H
#define COFFEEEXCEPTION_COFFEEMACHINE_H


class CoffeeMachine {
private:
    int capacite; //par défaut 3l d'eau
    int capacafe; //par défaut 2kg

public:
    CoffeeMachine();
    void insererPiece(float piece); //uniquement piece 0,5
    void rechargerEau(); //recharge la capacité d'eau
    void rechargerCafe(); //recharge la capacité de café
    void servir(); //sert un café de 0,15cl d'eau et de 10g de café coût du café est 0.5 euros
    //si plus de café ou plus d'eau recharge automatique

};


#endif //COFFEEEXCEPTION_COFFEEMACHINE_H
