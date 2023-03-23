/**
 * Created by lpzju on 2023/3/22 10:22
 */

#include <iostream>
#include "employee.h"
#include <iomanip>
#include <string>

void Employee::showInfo() {
    std::cout << "Worker id : " << std::setw(12) << std::left << m_id << "Worker name : " << std::setw(16) << std::left << m_name << "Worker dept : " << std::setw(16) << std::left << "Manger"
              << "Worker description : do the work from the manger" << std::endl;
}

Employee::Employee(int id, int deptId, std::string name) {
    m_name = name;
    m_id = id;
    m_deptId = deptId;
}
