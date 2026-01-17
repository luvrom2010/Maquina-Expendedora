#ifndef MAQUINA_H
#define MAQUINA_H
#include <vector>
#include "productos/producto.h"

namespace Maquina_Expendedora{

    class Maquina {
        //The class 'MaquinaExpendedora' defines the atributes to get access at the products and the stock also contains the money of the machine
        double dinero = 2500;
        std::vector<Producto> productos_maquina; //List of Products that have the class

    public:

        void anadirProductos(Producto& producto);
        //Method to add to the vector Products that the Costumer can buy

        void showProductos();
    };
}

#endif