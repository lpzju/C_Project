//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER3_WORKER_H
#define WORKERMANAGER3_WORKER_H

#include <iostream>
#include <string>

using namespace std;

class Worker {
public:
    // 成员变量
    int m_id;
    string m_name;
    int m_deptId;
    // 功能
    virtual void showInfo() = 0;
    // 构造与析构
};

#endif //WORKERMANAGER3_WORKER_H
