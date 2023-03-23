/**
 * Created by lpzju on 2023/3/22 9:13
 */
//#include <stdio.h>
#include <iostream>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <iterator>
#include <stack>
#include "workerManager.h"
using namespace std;


WorkerManager::WorkerManager() {
    cout << "WorkerManager structure" << endl;
}

WorkerManager::~WorkerManager() {
    cout << "WorkerManager destruction" << endl;
}

void WorkerManager::showMenu() {
    cout << "------------------------------------" << endl;
    cout << "********** WorkerManager ***********" << endl;
    cout << "************* 0.exit ***************" << endl;
    cout << "************* 0.exit ***************" << endl;
    cout << "************* 0.exit ***************" << endl;
    cout << "************* 0.exit ***************" << endl;
    cout << "************* 0.exit ***************" << endl;
    cout << "************* 0.exit ***************" << endl;
    cout << "************* 0.exit ***************" << endl;
    cout << "************* 0.exit ***************" << endl;
    cout << "************* 0.exit ***************" << endl;
    cout << "------------------------------------" << endl;
}

void WorkerManager::exitSystem() {
    cout << "Welcome next time!" << endl;
    system("pause");
    exit(0);
}
