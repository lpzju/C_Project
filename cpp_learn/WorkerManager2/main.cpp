#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manger.h"
#include "boss.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
    WorkerManager wm;
//    Worker *worker = nullptr;
//    worker = new Employee(1,1,"lisi");
//    worker->showInfo();
//    worker = new Manger(3,2,"zhangsan");
//    worker->showInfo();
//    worker = new Boss(4,3,"wangwu");
//    worker->showInfo();
    int choice;
    while (true) {
        wm.showMenu();
        std::cout << "input your choice:" << std::endl;
        std::cin >> choice;
        switch (choice) {
            case 0:
                wm.exitSystem();
                return 0;
            case 1:
                wm.addEmp();
                break;
            case 2:
                wm.showEmp();
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                system("cls");
        }
    }
    system("pause");
    return 0;
}
