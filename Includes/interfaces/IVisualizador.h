//
// Created by sntav on 16/01/2026.
//

#ifndef MAQUINA_EXPENDEDORA_IVISUALIZADOR_H
#define MAQUINA_EXPENDEDORA_IVISUALIZADOR_H

#include <vector>
#include "productos/producto.h"

namespace Maquina_Expendedora {
    class IVisualizador {
    public:
        virtual ~IVisualizador() = default;
        virtual void mostrarProductos(const std::vector<Producto>& obj_producto);
        //Let's see the Products of the Vending Machine
    };
}

#endif //MAQUINA_EXPENDEDORA_IVISUALIZADOR_H