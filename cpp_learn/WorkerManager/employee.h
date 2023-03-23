//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER_EMPLOYEE_H
#define WORKERMANAGER_EMPLOYEE_H

#include "worker.h"
class Employee : public Worker {
public:
    Employee(int id, int deptId, string name);
    void showInfo() override;
    string getDeptName() override;
};

#endif //WORKERMANAGER_EMPLOYEE_H
