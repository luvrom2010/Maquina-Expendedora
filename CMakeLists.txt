cmake_minimum_required(VERSION 3.15)
project(maquina_expendedora)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
        Maquina-Expendedora/src/main.cpp
        Maquina-Expendedora/src/descripcion_maquina/maquina.cpp
        Maquina-Expendedora/src/descripcion_maquina/muestra_producto.cpp
        Maquina-Expendedora/src/sistema_cambio/devolucion_dinero.cpp
        Maquina-Expendedora/src/sistema_cambio/recibir_pago.cpp
        Maquina-Expendedora/src/sistema_cambio/revision_dinero.cpp
        Maquina-Expendedora/src/usuario/cliente.cpp
        Maquina-Expendedora/src/usuario/cliente_pago.cpp
        Maquina-Expendedora/src/usuario/cliente_productos.cpp
        Maquina-Expendedora/src/usuario/cliente_revision_dinero.cpp
        Maquina-Expendedora/src/venta_compra/compra.cpp
        Maquina-Expendedora/src/venta_compra/validacion_compra.cpp
        Maquina-Expendedora/src/venta_compra/validacion_venta.cpp
        Maquina-Expendedora/src/venta_compra/venta.cpp
)

add_executable(maquina_expendedora ${SOURCES})

target_include_directories(maquina_expendedora PRIVATE
        Maquina-Expendedora/Includes
        Maquina-Expendedora/Includes/descripcion_maquina
        Maquina-Expendedora/Includes/sistema_cambio
        Maquina-Expendedora/Includes/usuario
        Maquina-Expendedora/Includes/venta_compra
)