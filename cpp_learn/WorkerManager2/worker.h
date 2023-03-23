//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER2_WORKER_H
#define WORKERMANAGER2_WORKER_H

#include <string>

class Worker {
public:
    virtual void showInfo() = 0;
    int m_id;
    int m_deptId;
    std::string m_name;
};

#endif //WORKERMANAGER2_WORKER_H
