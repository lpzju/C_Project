//
// Created by liupeng on 2023/3/21.
//

#include "worker.h"
#include <string.h>

#ifndef HEIMAGUANLI_EMPLOYEE_H
#define HEIMAGUANLI_EMPLOYEE_H

class Employee : public Worker {
    virtual void showInfo();
    virtual string getDeptName();
};

#endif //HEIMAGUANLI_EMPLOYEE_H
