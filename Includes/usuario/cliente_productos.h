#ifndef CLIENTE_PRODUCTOS_H
#define CLIENTE_PRODUCTOS_H
#include <vector>
#include <string>

namespace Maquina_Expendedora {
    class ClienteProducto {
        //Class for add products that the Costumer wants
    public:
        std::vector<std::string>productos_deseados;
        void AnadirProducto(std::string obj_producto_deseado); //Set the vector with the products

        const std::vector<std::string> RetornarProductos() const {
            return productos_deseados; //Getter of 'productos_deseados'
        }
    };
}

#endif