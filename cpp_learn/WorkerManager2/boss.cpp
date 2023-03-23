/**
 * Created by lpzju on 2023/3/22 10:34
 */

#include <iostream>
#include "boss.h"
#include <iomanip>
#include <string>

void Boss::showInfo() {
    std::cout << "Worker id : " << std::setw(12) << std::left << m_id << "Worker name : " << std::setw(16) << std::left << m_name << "Worker dept : " << std::setw(16) << std::left << "Boss"
              << "Worker description : rule the company and pay money" << std::endl;
}

Boss::Boss(int id, int deptId, std::string name) {
    m_name = name;
    m_id = id;
    m_deptId = deptId;
}