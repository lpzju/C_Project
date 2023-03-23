/**
 * Created by lpzju on 2023/3/21 21:18
 */

#include <iostream>
#include "workerManager.h"

void WorkerManager::showMenu() {
    std::cout << "****************************************************" << std::endl;
    std::cout << "*************** zhigongguanlixitong  ***************" << std::endl;
    std::cout << "***************** 0.tuichu *************************" << std::endl;
    std::cout << "***************** 1.zengjia ************************" << std::endl;
    std::cout << "***************** 2.xianshi ************************" << std::endl;
    std::cout << "***************** 3.shanchu ************************" << std::endl;
    std::cout << "***************** 4.xiugai *************************" << std::endl;
    std::cout << "***************** 5.chazhao ************************" << std::endl;
    std::cout << "***************** 6.paixu **************************" << std::endl;
    std::cout << "***************** 7.qingkong ***********************" << std::endl;
    std::cout << "****************************************************" << std::endl;
}

WorkerManager::WorkerManager() {
    std::cout << "WorkerManager structure" << std::endl;
}

WorkerManager::~WorkerManager() {
    std::cout << "WorkerManager destruction" << std::endl;
}

