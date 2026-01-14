#include "maquina.h"
#include <string>
#include <map>

//! Don't test this class, this doesn't work
namespace Maquina_Expendedora {
    Maquina::Maquina(std::map<std::string, int> obj_productos, double obj_dinero) {
        //? The Header 'maquina.h' isn't found
        productos = obj_productos;
        dinero = obj_dinero;
    }
}