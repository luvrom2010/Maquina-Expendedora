#include "cliente_productos.h"
#include <string>
#include <vector>
#include <utility>

namespace Maquina_Expendedora {
    void ClienteProducto::AnadirProducto(std::string obj_producto_deseado) {
        if (obj_producto_deseado.empty()) return;

        productos_deseados.push_back(std::move(obj_producto_deseado));
    }
}
