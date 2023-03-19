//
// Created by xiang on 2023/3/19.
//

#ifndef CPLUSPLUS_FACTORY_H
#define CPLUSPLUS_FACTORY_H
#include "concrete_product.h"

class Factory{
public:
    enum CAR_TYPE{
        BENZ_CAR,
        BMW_CAR,
        AUDI_CAR
    };

    ICar* CreateCar(CAR_TYPE type){
        ICar* p_car = nullptr;
        switch (type) {
            case CAR_TYPE::BENZ_CAR:
                p_car = new BenzCar();
                break;
            case CAR_TYPE::BMW_CAR:
                p_car = new BmwCar();
                break;
            case CAR_TYPE::AUDI_CAR:
                p_car = new AudiCar();
                break;
            default:
                break;
        }
        return p_car;
    }
};

#endif //CPLUSPLUS_FACTORY_H
