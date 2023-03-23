#include <iostream>
#include "workerManager.h"
#include <string>
#include "worker.h"
#include "employee.h"
#include "manger.h"
#include "boss.h"

using namespace std;

int main() {
    WorkerManager wm;
    while (true) {
        wm.showInterface();
        cout << "please input your choice:" << endl;
        int ch;
        cin >> ch;
        // 假定用户都输入数字
        switch (ch) {
            case 0:
                wm.exitSystem();
                return 0;
            case 1:
                wm.showEmp();
                break;
            case 2: {
                int res = wm.findEmp();
                if (res == -2) {
                    cout << "please add first!" << endl;
                } else if (res >= 0){
                    wm.showSpecific(res);
                } else if (res == -1) {
                    cout << "we don't have this staff, you could add him/her." << endl;
                }
                break;
            }
            case 3:
                wm.addEmp();
                break;
            case 4:
                wm.modify();
                break;
            case 5:
                wm.deleteEmp();
                break;
            case 6:
                wm.sortEmp();
                break;
            case 7:
                wm.emptyEmp();
                break;
            default:
                system("cls");
        }
    }

    return 0;
}
