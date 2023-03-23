/**
 * Created by lpzju on 2023/3/22 22:22
 */

#include <iostream>
#include "employee.h"
#include <iomanip>
#include <string>

using namespace std;

void Employee::showInfo() {
    cout << "Staff ID : " << setw(12) << left << this->m_id << "Staff name : " << setw(20) << left << this->m_name
         << "Staff depId : " << setw(12) << left << this->m_deptId << "Staff description : do work from manger" << endl;
}

Employee::Employee(int id, string name, int deptId) {
    this->m_id = id;
    this->m_name = name;
    this->m_deptId = deptId;
}
