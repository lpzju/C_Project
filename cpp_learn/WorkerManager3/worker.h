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
    // ��Ա����
    int m_id;
    string m_name;
    int m_deptId;
    // ����
    virtual void showInfo() = 0;
    // ����������
};

#endif //WORKERMANAGER3_WORKER_H
