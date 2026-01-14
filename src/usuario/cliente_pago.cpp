#include "cliente_pago.h"
#include "cliente.h"
#include "maquina.h"

namespace Maquina_Expendedora {
    void ClientePago::pagarCuenta(Cliente& cliente, double precio) {
        cliente.dinero -= precio;
    }
}