#include "cliente.h"
#include <string>
#include <vector>

namespace Maquina_Expendedora {
    Cliente::Cliente(const std::string& obj_nombre, double obj_dinero, const std::vector<std::string>& obj_producto_deseado) {
        //Cliente's class constructor: name, money and searched products
        nombre = obj_nombre;
        dinero = obj_dinero;
        producto_deseado = obj_producto_deseado;
    }

}