#ifndef CLIENTE_PAGO_H
#define CLIENTE_PAGO_H
#include "cliente.h"
#include "maquina.h"

namespace Maquina_Expendedora {

    class ClientePago {
        //That class has the method for the Costumer can paid the price of the products
    public:
        void pagarCuenta(Cliente& cliente, double change);
    };

}

#endif