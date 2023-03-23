/**
 * Created by lpzju on 2023/3/22 22:42
 */

#include <iostream>
#include "boss.h"
#include <iomanip>
#include <string>

using namespace std;

void Boss::showInfo() {
    cout << "Staff ID : " << setw(12) << left << this->m_id << "Staff name : " << setw(20) << left << this->m_name
         << "Staff depId : " << setw(12) << left << this->m_deptId << "rule the company and pay the money" << endl;
}

Boss::Boss(int id, string name, int deptId) {
    this->m_id = id;
    this->m_name = name;
    this->m_deptId = deptId;
}