//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER2_WORKERMANAGER_H
#define WORKERMANAGER2_WORKERMANAGER_H

#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manger.h"
#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager {
public:
    WorkerManager();
    void showMenu();
    void exitSystem();
    void saveFile();
    ~WorkerManager();
    void addEmp();
    int getEmpNum();
    void initEmp();
    void showEmp();
    int m_EmpNum;
    Worker **m_EmpArray;
    bool m_FileIsEmpty;
};

#endif //WORKERMANAGER2_WORKERMANAGER_H
