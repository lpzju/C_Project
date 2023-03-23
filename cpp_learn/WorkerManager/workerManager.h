//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER_WORKERMANAGER_H
#define WORKERMANAGER_WORKERMANAGER_H

#include <iostream>
#include <string>
using namespace std;

class WorkerManager {
public:
    WorkerManager();
    static void showMenu();
    static void exitSystem();
    ~WorkerManager();
};

#endif //WORKERMANAGER_WORKERMANAGER_H
