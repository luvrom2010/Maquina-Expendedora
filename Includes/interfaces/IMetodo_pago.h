//
// Created by sntav on 16/01/2026.
//
#ifndef MAQUINA_EXPENDEDORA_IMETODO_PAGO_H
#define MAQUINA_EXPENDEDORA_IMETODO_PAGO_H

namespace Maquina_Expendedora {
    class IMetodoPago {
    public:
        virtual ~IMetodoPago() = default;
        virtual void pagarMonto(double total); //Implements the metod paid
    };
} // Maquina_Expendedora

#endif