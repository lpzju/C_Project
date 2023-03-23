/**
 * Created by lpzju on 2023/3/21 21:00
 */

#include "workerManager.h"

WorkerManager::WorkerManager() {
    cout << "worker gouzao" << endl;
}

void WorkerManager::showMenu() {
    cout << "***************************" << endl;
    cout << "****** WorkerManager ******" << endl;
    cout << "***************************" << endl;
}

WorkerManager::~WorkerManager() {
    cout << "worker xigou" << endl;
}
