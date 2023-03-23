/**
 * Created by lpzju on 2023/3/22 9:43
 */
//#include <stdio.h>
#include <iostream>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <iterator>
#include <stack>
#include "employee.h"

using namespace std;


void Employee::showInfo() {
//    cout << "Employee info" << this->m_name << endl;
    cout << "Worker id : " << m_id << "\tWorker name : " << m_name << "\tWorker dept : " << "Employee"
         << "\tWorker description : do the work from the manger" << endl;
}

string Employee::getDeptName() {
//    return this->m_name;
    return m_name;
}

Employee::Employee(int id, int deptId, string name) {
    this->m_deptId = deptId;
    this->m_name = name;
    this->m_id = id;
}
