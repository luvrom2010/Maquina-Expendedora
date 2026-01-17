cmake_minimum_required(VERSION 3.15)
project(maquina_expendedora)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(Includes)

add_executable(maquina_expendedora
        src/main.cpp
        src/descripcion_maquina/maquina.cpp
        src/descripcion_maquina/muestra_producto.cpp
        src/sistema_cambio/devolucion_dinero.cpp
        src/sistema_cambio/recibir_pago.cpp
        src/sistema_cambio/revision_dinero.cpp
        src/usuario/cliente.cpp
        src/usuario/cliente_pago.cpp
        src/usuario/cliente_productos.cpp
        src/usuario/cliente_revision_dinero.cpp
        src/venta_compra/compra.cpp
        src/venta_compra/validacion_compra.cpp
        src/venta_compra/validacion_venta.cpp
        src/venta_compra/venta.cpp
        src/productos/producto.cpp
)