//
// Created by sntav on 16/01/2026.
//

#ifndef MAQUINA_EXPENDEDORA_PRODUCTO_H
#define MAQUINA_EXPENDEDORA_PRODUCTO_H

#include <string>

namespace Maquina_Expendedora {
    class Producto {
        std::string nombre; //Product's name
        double precio; //Product's price

    public:
        Producto(const std::string& obj_name, double precio);
        //Class Constructor
        std::string getNombre();
            //Get the name of the Product

        double getPrecio() const;
            //Get the price of the Product
    };
} // Maquina_Expendedora

#endif //MAQUINA_EXPENDEDORA_PRODUCTO_H