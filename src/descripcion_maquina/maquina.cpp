#include "descripcion_maquina/maquina.h"
#include <iostream>

namespace Maquina_Expendedora {

    void Maquina::anadirProductos(Producto& producto) {
        bool encontrado = false; //flag to know if the product isn't in the vector but contains other products
        if (!productos_maquina.empty()) {
            for (Producto& prod : productos_maquina) {
                if (producto.getNombre() == prod.getNombre()) {
                    //if found the product
                    encontrado = true;
                    prod.setStock();
                }
            }

            if (!encontrado) {
                //if not found the product in the vector
                producto.setStock();
                productos_maquina.push_back(producto);
            }
        }

        else {
            //Or if the vector is empty
            productos_maquina.push_back(producto);
            producto.setStock();
        }
    }


    void Maquina::showProductos() {
        if (productos_maquina.empty()) {
            std::cout << "La Maquina Expendedora no tiene productos!" << "\n";
            //'The Vending Machine doesn't has products'
        }

        std::cout << "PRODUCTOS DE LA MAQUINA EXPENDEDORA" << "\n";
        //'Vending Machine Products'
        for (Producto& prod : productos_maquina) {
            std::cout << "NOMBRE |" << prod.getNombre() << "\n"
            "PRECIO |" << prod.getPrecio() << "\n"
            "STOCK | " << prod.getStock() << "\n";
        }
    }
}