/**
 * Created by lpzju on 2023/3/22 10:29
 */

#include "manger.h"
#include <iomanip>
#include <iostream>
using namespace std;
#include <string>

void Manger::showInfo() {
    std::cout << "Worker id : " << std::setw(12) << std::left << m_id << "Worker name : " << std::setw(16) << std::left << m_name << "Worker dept : " << std::setw(16) << std::left << "Manger"
              << "Worker description : listen boss, train employee" << std::endl;
}

Manger::Manger(int id, int deptId, std::string name) {
    m_name = name;
    m_id = id;
    m_deptId = deptId;
}
