//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER3_EMPLOYEE_H
#define WORKERMANAGER3_EMPLOYEE_H

#include <iostream>
#include "worker.h"
#include <string>

using namespace std;

class Employee : public Worker {
public:
    void showInfo() override;
    Employee(int id, string name, int deptId);
};

#endif //WORKERMANAGER3_EMPLOYEE_H
