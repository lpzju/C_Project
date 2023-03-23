//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER3_WORKERMANAGER_H
#define WORKERMANAGER3_WORKERMANAGER_H

#include "worker.h"

class WorkerManager {
public:
    // 成员变量
    int m_empNum;
    bool isEmptyFile;
    Worker **m_Worker;
    // 功能
    void showInterface(); // 主界面
    void exitSystem(); // 功能0，退出
    void showEmp(); // 功能1，显示
    int findEmp(); // 功能2，查找
    void addEmp(); // 功能3，添加
    void modify(); // 功能4，修改
    void deleteEmp(); // 功能5，删除
    void sortEmp(); // 功能6，排序
    void emptyEmp(); // 功能7，清空

    int idExist(int id);
    void initEmpArray();
    int getEmpFileNum();
    void showSpecific(int pos);
    void save(); // 保存到文件
    // 初始化
    WorkerManager();
};

#endif //WORKERMANAGER3_WORKERMANAGER_H
