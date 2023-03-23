//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER2_BOSS_H
#define WORKERMANAGER2_BOSS_H

#include "worker.h"
#include <string>
class Boss : public Worker {
public:
    void showInfo() override;
    Boss(int id, int deptId, std::string name);
};

#endif //WORKERMANAGER2_BOSS_H
