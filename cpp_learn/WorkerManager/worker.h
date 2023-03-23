//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER_WORKER_H
#define WORKERMANAGER_WORKER_H

#include <iostream>
#include <string>
using namespace std;

class Worker {
public:
    virtual void showInfo() = 0;
    virtual string getDeptName() = 0;

protected:
    int m_id;
    int m_deptId;
    string m_name;
};

#endif //WORKERMANAGER_WORKER_H
