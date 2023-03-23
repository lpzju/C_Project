/**
 * Created by lpzju on 2023/3/22 21:50
 */

#include <iostream>
#include "workerManager.h"
#include "employee.h"
#include "manger.h"
#include "boss.h"
#include <string>
#include <fstream>

#define FILENAME "empFile.txt"

using namespace std;

void WorkerManager::showInterface() {
    cout << "-------------------------------------------------------" << endl;
    cout << "******************** WorkerManager ********************" << endl;
    cout << "********************     0.exit    ********************" << endl;
    cout << "********************     1.show    ********************" << endl;
    cout << "********************     2.find   ********************" << endl;
    cout << "********************     3.add    ********************" << endl;
    cout << "*******************     4.modify    *******************" << endl;
    cout << "*******************     5.delete    ********************" << endl;
    cout << "********************     6.sort    ********************" << endl;
    cout << "*******************     7.empty    ********************" << endl;
    cout << "-------------------------------------------------------" << endl;
}

void WorkerManager::exitSystem() {
    cout << "Welcome next time!" << endl;
    system("pause");
    exit(0);
}

void WorkerManager::addEmp() {
    cout << "how many people you want to add : " << endl;
    int addNum;
    cin >> addNum;
    if (addNum > 0) {
        int newSize = addNum + this->m_empNum;
        Worker **pWorker = new Worker*[newSize];
        if (m_empNum != 0) {
            for (int i = 0; i < m_empNum; i++) {
                pWorker[i] = m_Worker[i];
            }
        }
//        this->m_Worker = new Worker *[newSize];
        int id, deptId;
        string name;
        for (int i = 0; i < addNum; i++) {
            cout << "please input the " << i + 1 << " staff's id : " << endl;
            cin >> id;
            int res = idExist(id);
            if (res >= 0) {
                cout << "this staff's id is already exist!" << endl;
                i--;
                continue;
            } else {
                int flag = -1;
                for (int j = 0; j < m_empNum+i; j++) {
                    if (id == pWorker[j]->m_id) {
                        cout << "you have registered the id!" << endl;
                        flag = j;
                        break;
                    }
                }
                if (flag != -1) {
                    i--;
                    continue;
                }
            }
            cout << "please input the " << i + 1 << " staff's name : " << endl;
            cin >> name;
            cout << "please input the " << i + 1 << " staff's deptId : " << endl;
            cout << "1.employee" << endl;
            cout << "2.manger" << endl;
            cout << "3.boss" << endl;
            cin >> deptId;
            Worker *worker = nullptr;
            if (deptId == 1) {
                worker = new Employee(id, name, deptId);
            } else if (deptId == 2) {
                worker = new Manger(id, name, deptId);
            } else if (deptId == 3) {
                worker = new Boss(id, name, deptId);
            }
            pWorker[m_empNum+i] = worker;
        }
        m_empNum = newSize;
        delete [] this->m_Worker;
        m_Worker = pWorker;
        isEmptyFile = false;
        save();
        cout << "already add success!" << endl;
        system("pause");
        system("cls");
    } else {
        cout << "please input a right number!" << endl;
    }
}

WorkerManager::WorkerManager() {
    ifstream ifs;
    ifs.open(FILENAME,ios::in);
    if (!ifs.is_open()) {
        this->m_empNum = 0;
        this->m_Worker = nullptr;
        this->isEmptyFile = true;
        cout << "No such File or Directory!" << endl;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if(ifs.eof()) {
        this->m_empNum = 0;
        this->m_Worker = nullptr;
        this->isEmptyFile = true;
        cout << "The file is empty" << endl;
        ifs.close();
        return;
    }
    int num = getEmpFileNum();
    cout << "we have " << num << " staff" << endl;
    this->m_empNum = num;
    this->m_Worker = new Worker*[num];
    initEmpArray();
    cout << "m_empNum :" << m_empNum << endl;
    // 打印测试
    for (int i = 0; i < m_empNum; i++) {
        std::cout << m_Worker[i]->m_id << ", " << m_Worker[i]->m_name << ", " << m_Worker[i]->m_deptId << std::endl;
    }
}

void WorkerManager::showEmp() {
    if (this->m_empNum > 0) {
        for (int i = 0; i < this->m_empNum; i++) {
//            cout << m_Worker[i]->m_id << "\t" << m_Worker[i]->m_name << "\t" << m_Worker[i]->m_deptId << endl;
            Worker *worker = nullptr;
            if (m_Worker[i]->m_deptId == 1) {
                worker = new Employee(m_Worker[i]->m_id, m_Worker[i]->m_name, m_Worker[i]->m_deptId);
                worker->showInfo();
                delete worker;
                worker = nullptr;
            } else if (m_Worker[i]->m_deptId == 2) {
                worker = new Manger(m_Worker[i]->m_id, m_Worker[i]->m_name, m_Worker[i]->m_deptId);
                worker->showInfo();
                delete worker;
                worker = nullptr;
            } else if (m_Worker[i]->m_deptId == 3) {
                worker = new Boss(m_Worker[i]->m_id, m_Worker[i]->m_name, m_Worker[i]->m_deptId);
                worker->showInfo();
                delete worker;
                worker = nullptr;
            }
        }
    } else {
        cout << "please add first!" << endl;
    }
}

int WorkerManager::findEmp() {
    if (this->m_empNum == 0) {
        return -2;
    }
    cout << "1.input id to search" << endl;
    cout << "2.input name to search" << endl;
    int ch;
    cin >> ch;
    int flag = -1;
    if (ch == 1) {
        int destId;
        cout << "please input the id you want to search:" << endl;
        cin >> destId;
        for (int i = 0; i < this->m_empNum; i++) {
            if (this->m_Worker[i]->m_id == destId) {
                flag = i;
                cout << "we found the id!" << endl;
                break;
            }
        }
    } else if (ch == 2) {
        string name;
        cout << "please input the name you want to search:" << endl;
        cin >> name;
        for (int i = 0; i < this->m_empNum; i++) {
            if (this->m_Worker[i]->m_name == name) {
                flag = i;
                cout << "we found the name!" << endl;
                break;
            }
        }
    } else {
        cout << "wrong input!" << endl;
    }
    return flag;
}

void WorkerManager::save() {
    ofstream ofs;
    ofs.open(FILENAME, ios::out);
    for (int i = 0; i < this->m_empNum; i++) {
        ofs << this->m_Worker[i]->m_id << " " << this->m_Worker[i]->m_name << " " << this->m_Worker[i]->m_deptId
            << endl;
    }
    ofs.close();
}

void WorkerManager::showSpecific(int pos) {
    Worker *worker = nullptr;
    if (this->m_Worker[pos]->m_deptId == 1) {
        worker = new Employee(this->m_Worker[pos]->m_id, this->m_Worker[pos]->m_name, this->m_Worker[pos]->m_deptId);
        worker->showInfo();
        delete worker;
        worker = nullptr;
    } else if (this->m_Worker[pos]->m_deptId == 2) {
        worker = new Manger(this->m_Worker[pos]->m_id, this->m_Worker[pos]->m_name, this->m_Worker[pos]->m_deptId);
        worker->showInfo();
        delete worker;
        worker = nullptr;
    } else if (this->m_Worker[pos]->m_deptId == 3) {
        worker = new Boss(this->m_Worker[pos]->m_id, this->m_Worker[pos]->m_name, this->m_Worker[pos]->m_deptId);
        worker->showInfo();
        delete worker;
        worker = nullptr;
    }
}

int WorkerManager::getEmpFileNum() {
    ifstream ifs;
    ifs.open(FILENAME,ios::in);
    int id, deptId;
    string name;
    int num = 0;
    while (ifs >> id && ifs >> name && ifs >> deptId) {
        num++;
    }
    return num;
}

void WorkerManager::initEmpArray() {
    ifstream ifs;
    ifs.open(FILENAME,ios::in);
    int id, deptId;
    string name;
    Worker *worker = nullptr;
    int idx = 0;
    while (ifs >> id && ifs >> name && ifs >> deptId) {
        if (deptId == 1) {
            worker = new Employee(id, name, deptId);
        } else if (deptId == 2) {
            worker = new Employee(id, name, deptId);
        } else if (deptId == 3) {
            worker = new Boss(id, name, deptId);
        } else {
            cout << "wrong" << endl;
        }
        this->m_Worker[idx++] = worker;
    }
    ifs.close();
}

void WorkerManager::modify() {
    cout << "please enter the id you want to modify : " << endl;
    int id;
    cin >> id;
    int res = this->idExist(id);
    if (res >= 0) {
        showSpecific(res);
        cout << "what id you want to modify to?" << endl;
        cin >> id;
        int temp = idExist(id);
        if (temp >= 0) {
            cout << "you can't modify to the exist id!" << endl;
            return;
        }
        m_Worker[res]->m_id = id;
        int deptId;
        string name;
        cout << "please input the name you want to modify : " << endl;
        cin >> name;
        this->m_Worker[res]->m_name = name;
        cout << "please input the deptId you want to modify : " << endl;
        cin >> deptId;
        this->m_Worker[res]->m_deptId = deptId;
        save();
        cout << "already modify success!" << endl;
        system("pause");
        system("cls");
    } else {
        cout << "we don't have this staff!" << endl;
    }
}

int WorkerManager::idExist(int id) {
    if (this->m_empNum == 0) {
        return -2;
    }
    int flag = -1;
    for (int i = 0; i < this->m_empNum; i++) {
        if (this->m_Worker[i]->m_id == id) {
            flag = i;
            cout << "we found the id!" << endl;
            break;
        }
    }
    return flag;
}

void WorkerManager::deleteEmp() {
    cout << "please input the id you want to delete!" << endl;
    int id;
    cin >> id;
    int res = idExist(id);
    if (res < 0) {
        cout << "no this id" << endl;
        return;
    }
    for (int i = res; i < m_empNum-1; i++) {
        m_Worker[i] = m_Worker[i+1];
    }
    m_empNum--;
    save();
}

void WorkerManager::sortEmp() {
    // 使用冒泡排序，不搞那么麻烦，就对id实现从小到大排序
    for (int i = 0; i < m_empNum-1; i++) {
        for (int j = 0; j < m_empNum-1-i; j++) {
            if (m_Worker[j]->m_id > m_Worker[j+1]->m_id) {
                Worker *tempW = m_Worker[j];
                m_Worker[j] = m_Worker[j+1];
                m_Worker[j+1] = tempW;
            }
        }
    }
    cout << "already sort the emp" << endl;
    save();
}

void WorkerManager::emptyEmp() {
    cout << "are you sure you want to empty the emp? yes/no?" << endl;
    string flag;
    cin >> flag;
    if (flag == "yes") {
        cout << "deleting..." << endl;
        for (int i = 0; i < m_empNum; i++) {
            delete m_Worker[i];
            m_Worker[i] = nullptr;
        }
        delete []m_Worker;
        m_Worker = nullptr;
        m_empNum = 0;
        save();
    } else if (flag == "no") {
        cout << "backing..." << endl;
    } else {
        cout << "wrong choice!" << endl;
        system("pause");
        system("cls");
    }
}
