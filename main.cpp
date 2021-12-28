#include "header.h"
#include <iostream>

int main(){
    int vagoni,scelta,npersone;

    std::cout << "Inserire il numero di vagoni del treno" << std::endl << ">>> "; std::cin >> vagoni;

    Treno t = Treno(vagoni);

    for(int i = 0; i < 5; i++){
        sbaglio:
        std::cout << "Salgono(1) o scendono(2)?" << std::endl << ">>> "; std::cin >> scelta;
        if(scelta == 1){
            std::cout << "Quanti?" << std::endl << ">>> "; std::cin >> npersone;
            t.Salita(npersone);
        }else if(scelta == 2){
            std::cout << "Quanti?" << std::endl << ">>> "; std::cin >> npersone;
            t.Scesa(npersone);
        }else{
            std::cout << "Hai sbagliato ad inserire riprova" << std::endl;
            goto sbaglio;
        }
    }
    int totalePersone = t.Totale();
    double mediaPersone = t.Media();

    std::cout << "Nel treno ci sono " << totalePersone << "  persone per una media di " << mediaPersone << " per vagone.";
    return 0;
}