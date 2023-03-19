//
// Created by xiang on 2023/3/19.
//

#ifndef CPLUSPLUS_CONCRETE_PRODUCT_H
#define CPLUSPLUS_CONCRETE_PRODUCT_H
#include "product.h"

class  BenzCar: public ICar{
public:
    string Name(){
        return "Benz Car";
    }
};

class BmwCar:public ICar{
public:
    string Name(){
        return "Bmw Car";
    }
};

class AudiCar:public ICar{
public:
    string Name(){
        return "Audi Car";
    }
};
#endif //CPLUSPLUS_CONCRETE_PRODUCT_H
