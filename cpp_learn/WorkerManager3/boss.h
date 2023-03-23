//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER3_BOSS_H
#define WORKERMANAGER3_BOSS_H

#include <iostream>
#include "worker.h"
#include <string>

using namespace std;

class Boss : public Worker {
public:
    void showInfo() override;
    Boss(int id, string name, int deptId);
};

#endif //WORKERMANAGER3_BOSS_H
