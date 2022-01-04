#include <iostream>
#include <cstring>
#include "CoffeeMachine.h"

int main() {
    CoffeeMachine nespresso=CoffeeMachine();
   /******écrire une boucle de test pour servir*******************/
   while(true)
   {
       try {
           nespresso.insererPiece(0.5);
       }catch (const char* ex)
       {
           std::cout<<ex<<std::endl;
           if(strcmp(ex,"plus de café")==0)
           {
               nespresso.rechargerCafe();
           }
           else
           {
               nespresso.rechargerEau();
           }
       }
   }


   /*******écrire un test d'insertion invalide***********************/

    return 0;
}
