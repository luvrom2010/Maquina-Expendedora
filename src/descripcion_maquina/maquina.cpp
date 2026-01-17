#include "descripcion_maquina/maquina.h"

namespace Maquina_Expendedora {

    void Maquina::anadirProductos(Producto producto) {
        for (Producto& prod : productos_maquina) {
            if (producto.getNombre() == prod.getNombre()) {
                //if found the product
                prod.setStock();
                return;
            }
        }

        producto.setStock();
        productos_maquina.push_back(producto);
    }


    const std::vector<Producto>& Maquina::getProductos() const{
        return productos_maquina;
    }
}