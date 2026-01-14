#ifndef MAQUINA_H
#define MAQUINA_H
#include <map>
#include <string>

namespace Maquina_Expendedora{

    class Maquina {
        //The class 'MaquinaExpendedora' defines the atributes to get access at the products and the stock also contains the money of the machine
    public:
        std::map<std::string, int> productos; //Vector of products
        double dinero; //Money

        Maquina(std::map<std::string, int> obj_products, double obj_money);
    };
}

#endif