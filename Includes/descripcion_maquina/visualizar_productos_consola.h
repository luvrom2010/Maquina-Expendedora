//
// Created by sntav on 16/01/2026.
//

#ifndef MOSTRAR_PRODUCTOS_H
#define MOSTRAR_PRODUCTOS_H
#include "productos/producto.h"
#include "interfaces/IVisualizador.h"
#include <vector>

namespace Maquina_Expendedora {
    class VisualizarProductosConsola : public IVisualizador{
        void mostrarProductos(const std::vector<Producto>& copia_productos) override;
        //Class that implements the Interace for show the Products in Console
    };
}

#endif