#include "header.h"

Treno::Treno(int nV){
    numVagoni = nV;
};

void Treno::Salita(int pSa){
    persone += pSa;
};

void Treno::Scesa(int pSc){
    persone -= pSc;
};

int Treno::Totale(){
    return persone;
};

double Treno::Media(){
    return double(persone) / double(numVagoni);
};