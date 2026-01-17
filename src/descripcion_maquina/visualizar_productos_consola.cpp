#include "descripcion_maquina/visualizar_productos_consola.h"
#include "productos/producto.h"
#include <vector>
#include <iostream>

namespace Maquina_Expendedora {
    void VisualizarProductosConsola::mostrarProductos(const std::vector<Producto>& copia_productos) {
       for (const Producto& prod : copia_productos) {
           std::cout << "NOMBRE |" << prod.getNombre() << "\n"
           "PRECIO |" << prod.getPrecio() << "\n"
           "STOCK | " << prod.getStock() << "\n";
       }
    }
}