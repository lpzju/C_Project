//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER2_MANGER_H
#define WORKERMANAGER2_MANGER_H

#include <iostream>
#include "worker.h"
#include <string>

class Manger : public Worker{
public:
    void showInfo() override;
    Manger(int id, int deptId, std::string name);
};

#endif //WORKERMANAGER2_MANGER_H
