#ifndef OOP1_H_INCLUDED
#define OOP1_H_INCLUDED

class Treno{
    public:
        Treno(int nV);
        void Salita(int pSa);
        void Scesa(int pSc);
        int Totale();
        double Media();

    private:
        int numVagoni = 0, capienza = 0,persone = 0;
};

#endif // OOP1_H_INCLUDED