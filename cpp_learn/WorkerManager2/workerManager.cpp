/**
 * Created by lpzju on 2023/3/22 10:13
 */

#include <iostream>
#include <string>
#include "workerManager.h"
#include <fstream>

#define FIElNAME "empFile.txt"

WorkerManager::WorkerManager() {
//    std::cout << "Worker structure" << std::endl;
    std::ifstream ifstream;
    ifstream.open(FIElNAME,std::ios::in);
    if(!ifstream.is_open()) {
        std::cout << "No such file!" << std::endl;
        m_EmpNum = 0;
        m_EmpArray = nullptr;
        m_FileIsEmpty = true;
        ifstream.close();
        return;
    }
    char ch;
    ifstream >> ch;
    if (ifstream.eof()) {
        std::cout << "File is empty" << std::endl;
        m_EmpNum = 0;
        m_EmpArray = nullptr;
        m_FileIsEmpty = true;
        ifstream.close();
        return;
    }
    int num = getEmpNum();
    std::cout << "staff is : " << num << std::endl;
    m_EmpNum = num;
    m_EmpArray = new Worker*[m_EmpNum];
    initEmp();
    // ´òÓ¡²âÊÔ
    for (int i = 0; i < m_EmpNum; i++) {
        std::cout << m_EmpArray[i]->m_name << std::endl;
    }
}

WorkerManager::~WorkerManager() {
    std::cout << "Worker destruction" << std::endl;
    if (this->m_EmpArray != nullptr) {
        delete[] this->m_EmpArray;
        this->m_EmpArray = nullptr;
    }
}

void WorkerManager::showMenu() {
    std::cout << "------------------------------------" << std::endl;
    std::cout << "********** WorkerManager ***********" << std::endl;
    std::cout << "************* 0.exit ***************" << std::endl;
    std::cout << "************* 1.add ***************" << std::endl;
    std::cout << "************* 2.exit ***************" << std::endl;
    std::cout << "************* 3.exit ***************" << std::endl;
    std::cout << "************* 4.exit ***************" << std::endl;
    std::cout << "************* 5.exit ***************" << std::endl;
    std::cout << "************* 6.exit ***************" << std::endl;
    std::cout << "************* 7.exit ***************" << std::endl;
    std::cout << "------------------------------------" << std::endl;
}

void WorkerManager::exitSystem() {
    std::cout << "Welcome next time!" << std::endl;
    system("pause");
    exit(0);
}

void WorkerManager::addEmp() {
    std::cout << "the staff want to add:" << std::endl;
    int addNum = 0;
    std::cin >> addNum;
    if (addNum > 0) {
        int newSize = addNum + m_EmpNum;
        Worker **newSpace = new Worker *[newSize];
        if (m_EmpArray != nullptr) {
            for (int i = 0; i < m_EmpNum; i++) {
                newSpace[i] = m_EmpArray[i];
            }
        }
        for (int i = 0; i < addNum; i++) {
            int id, deptId;
            std::string name;
            std::cout << "enter the " << i + 1 << " position " << "id" << std::endl;
            std::cin >> id;
            std::cout << "enter the " << i + 1 << " position " << "name" << std::endl;
            std::cin >> name;
            std::cout << "department:" << std::endl;
            std::cout << "1.employee" << std::endl;
            std::cout << "2.manger" << std::endl;
            std::cout << "3.boss" << std::endl;
            std::cin >> deptId;

            Worker *worker = nullptr;
            switch (deptId) {
                case 1:
                    worker = new Employee(id, deptId, name);
                    break;
                case 2:
                    worker = new Manger(id, deptId, name);
                    break;
                case 3:
                    worker = new Boss(id, deptId, name);
                    break;
                default:
                    std::cout << "wrong!" << std::endl;
                    system("pause");
                    system("cls");
            }
            newSpace[m_EmpNum + i] = worker;
        }
        delete[] this->m_EmpArray;
        this->m_EmpArray = newSpace;
        this->m_EmpNum = newSize;
        std::cout << "Success add " << addNum << " staff" << std::endl;
        m_FileIsEmpty = false;
        saveFile();
        system("pause");
        system("cls");

    } else {
        std::cout << "wrong number!" << std::endl;
        system("cls");
    }
}

void WorkerManager::saveFile() {
    std::ofstream ofs;
    ofs.open(FIElNAME, std::ios::out);
    for (int i = 0; i < m_EmpNum; i++) {
        ofs << m_EmpArray[i]->m_id << " " << m_EmpArray[i]->m_name << " " << m_EmpArray[i]->m_deptId << std::endl;
    }
    ofs.close();
}

int WorkerManager::getEmpNum() {
    std::ifstream ifs;
    ifs.open(FIElNAME,std::ios::in);
    int num = 0;
    int id, deptId;
    std::string name;
    while (ifs >> id && ifs >> name && ifs >> deptId) {
        num++;
    }

    return num;
}

void WorkerManager::initEmp() {
    std::ifstream ifstream;
    ifstream.open(FILENAME,std::ios::in);
    int id, deptId;
    std::string name;
    int idx = 0;
    while (ifstream >> id && ifstream >> name && ifstream >> deptId) {
        Worker *worker = nullptr;
        if (deptId == 1) {
            worker = new Employee(id,deptId,name);
        } else if (deptId == 2) {
            worker = new Manger(id,deptId,name);
        } else if (deptId == 3) {
            worker = new Boss(id,deptId,name);
        }
        m_EmpArray[idx] = worker;
        idx++;
    }
    ifstream.close();
}

void WorkerManager::showEmp() {
    if (m_FileIsEmpty) {
        std::cout << "No such file!" << std::endl;
    }
    else {
        for (int i = 0; i < m_EmpNum; i++) {
            this->m_EmpArray[i]->showInfo();
        }
    }
    system("pause");
    system("cls");
}
