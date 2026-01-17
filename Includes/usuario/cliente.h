#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>

#include "interfaces/IMetodo_pago.h"
#include "productos/producto.h"

namespace Maquina_Expendedora {

    class Cliente : public IMetodoPago{
    //The class 'Cliente' defines the atributes of the class to will be use in the other proccess
        std::string nombre; //Costumer's name
        double dinero; //Costumer's money
        std::vector<Producto> producto_deseado; //Vector that contains the products that the Costumer search

    public:
        Cliente(const std::string& obj_nombre, double obj_dinero);

        void pagarMonto(double precio_total) override;
        //Implements the interface method

        void anadirProducto(const Producto& obj_producto_anadido);
        //Method for add to the vector the Products that the Costumer wants

        ~Cliente() = default;
    };
}

#endif