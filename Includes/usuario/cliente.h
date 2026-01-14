#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>

namespace Maquina_Expendedora {

    class Cliente {
    //The class 'Cliente' defines the atributes of the class to will be use in the other proccess
    public:
        std::string nombre; //Costumer's name
        double dinero; //Costumer's money
        std::vector<std::string> producto_deseado; //Vector that contains the products that the Costumer search

        Cliente(const std::string& obj_nombre, double obj_dinero, const std::vector<std::string>& obj_producto_deseado);
    };
}

#endif