//
// CreateCard by xiang on 2023/3/19.
//
#include <iostream>
# include "factory.h"

using namespace std;

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete(p); (p)=nullptr;}}
#endif

int main() {
    // 创建工厂
    Factory *p_factory = new Factory();

    // 生产奔驰汽车
    ICar *p_benz_car = p_factory->CreateCar(Factory::BENZ_CAR);
    cout << p_benz_car->Name() << endl;

    ICar *p_bmw_car = p_factory->CreateCar(Factory::BMW_CAR);
    cout << p_bmw_car->Name() << endl;

    ICar *p_audi_car = p_factory->CreateCar(Factory::AUDI_CAR);
    cout << p_audi_car->Name() << endl;

    return 0;
}
