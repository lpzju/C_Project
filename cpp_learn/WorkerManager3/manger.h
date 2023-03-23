//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER3_MANGER_H
#define WORKERMANAGER3_MANGER_H

#include <iostream>
#include "worker.h"
#include <string>

using namespace std;

class Manger : public Worker {
public:
    void showInfo() override;
    Manger(int id, string name, int deptId);
};

#endif //WORKERMANAGER3_MANGER_H
