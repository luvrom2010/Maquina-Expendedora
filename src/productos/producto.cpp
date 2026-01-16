//
// Created by sntav on 16/01/2026.
//

#include "productos/producto.h"
#include <string>

namespace Maquina_Expendedora {

    Producto::Producto(const std::string& obj_nombre, double obj_precio) {
        nombre = obj_nombre;
        precio = obj_precio;
    }

    std::string Producto::getNombre() {
        return nombre;
    }

    double Producto::getPrecio() const{
        return precio;
    }
}