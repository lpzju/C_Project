#include <iostream>
#include <string>
using namespace std;
#include "workerManager.h"
#include "employee.h"
#include "worker.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
    WorkerManager wm;
    Worker *worker = nullptr;
    worker = new Employee(1,2,"lisi");
    worker->showInfo();
//    int choice;
//    while (true) {
//        wm.showMenu();
//        cout << "input your choice:" << endl;
//        cin >> choice;
//        switch (choice) {
//            case 0:
//                wm.exitSystem();
//                return 0;
//                break;
//            case 1:
//                break;
//            case 2:
//                break;
//            case 3:
//                break;
//            case 4:
//                break;
//            case 5:
//                break;
//            case 6:
//                break;
//            case 7:
//                break;
//            default:
//                system("cls");
//        }
//    }
    system("pause");
    return 0;
}
