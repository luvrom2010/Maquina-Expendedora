//
// Created by sntav on 16/01/2026.
//

#include "productos/producto.h"
#include <string>

namespace Maquina_Expendedora {

    Producto::Producto(const std::string& obj_nombre, double obj_precio) {
        nombre = obj_nombre;
        precio = obj_precio;
        stock = 0;
    }

    std::string Producto::getNombre() const{
        return nombre;
    }

    double Producto::getPrecio() const{
        return precio;
    }

    int Producto::getStock() const{
        return stock;
    }

    void Producto::setStock() {
        stock++;
    }
}