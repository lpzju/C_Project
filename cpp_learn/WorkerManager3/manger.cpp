/**
 * Created by lpzju on 2023/3/22 22:37
 */

#include <iostream>
#include "manger.h"
#include <iomanip>
#include <string>

using namespace std;

void Manger::showInfo() {
    cout << "Staff ID : " << setw(12) << left << this->m_id << "Staff name : " << setw(20) << left << this->m_name
         << "Staff depId : " << setw(12) << left << this->m_deptId << "Staff description : listen to the boss and call employee" << endl;
}

Manger::Manger(int id, string name, int deptId) {
    this->m_id = id;
    this->m_name = name;
    this->m_deptId = deptId;
}