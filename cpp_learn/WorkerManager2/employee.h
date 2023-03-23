//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER2_EMPLOYEE_H
#define WORKERMANAGER2_EMPLOYEE_H

#include "worker.h"
#include <string>

class Employee : public Worker {
public:
    void showInfo() override;
    Employee(int id, int deptId, std::string name);
};

#endif //WORKERMANAGER2_EMPLOYEE_H
