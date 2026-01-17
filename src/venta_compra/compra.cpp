#include "venta_compra/compra.h"
using namespace std;

compra::compra(int codigo , int cantidad){ // Constructor : Los de la izquierda atributo de clase - El de la derecha parametro del constructor

    this->codigo = codigo;
    this->cantidad = cantidad;

}

// Metodo para calcular el total

float compra::calcularTotal(){

    return precio *  codigo;

}


