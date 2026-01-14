#ifndef COMPRA_H
#define COMPRA_H

class compra {

    private: 
        int codigo;
        int precio;
        int cantidad;
    public:
        compra(int codigo, int cantidad);
        float calcularTotal();

};

#endif
