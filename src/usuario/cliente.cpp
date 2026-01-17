#include "usuario/cliente.h"
#include "productos/producto.h"
#include <string>
#include <vector>

namespace Maquina_Expendedora {
    Cliente::Cliente(const std::string& obj_nombre, double obj_dinero) {
        nombre = obj_nombre;
        dinero = obj_dinero;
    }

    void Cliente::pagarMonto(double precio_total) {
        if (precio_total > dinero) return;
        dinero -= precio_total;
    }

    void Cliente::anadirProducto(const Producto& obj_producto_anadido) {
        producto_deseado.push_back(obj_producto_anadido);
    }
}
