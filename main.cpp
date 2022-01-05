#include <iostream>
#include <cstring>
#include "CoffeeMachine.h"
using namespace std;
int main() {
    CoffeeMachine nespresso=CoffeeMachine();
   /******écrire une boucle de test pour servir*******************/
   while(true)
   {
       try {
           nespresso.insererPiece(0.4);
       }
       catch (invalid_argument &ia)
       {
           cout<<ia.what()<<endl;
       }
       catch (const char* ex)
       {
           std::cout<<ex<<std::endl;
           if(strcmp(ex,"plus de café")==0)
           {
               nespresso.rechargerCafe();
           }
           else
           if(strcmp(ex,"plus d'eau")==0)
           {
               nespresso.rechargerEau();
           }
       }
   }


   /*******écrire un test d'insertion invalide***********************/

    return 0;
}
