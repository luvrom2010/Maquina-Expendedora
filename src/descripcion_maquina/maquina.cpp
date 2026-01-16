#include "maquina.h"
#include <string>
#include <map>


namespace Maquina_Expendedora {
    Maquina::Maquina(const std::map<std::string, int>& obj_productos, double obj_dinero) {
        productos = obj_productos;
        dinero = obj_dinero;
    }
}