//
// Created by liupeng on 2023/3/21.
//

#ifndef HEIMAGUANLI_WORKER_H
#define HEIMAGUANLI_WORKER_H

class Worker {
public:
    virtual void showInfo() = 0;
    virtual string getDeptName() = 0;
    int m_id;
    string m_name;
    int m_deptId;
};

#endif //HEIMAGUANLI_WORKER_H
