//
// Created by liupeng on 2023/3/22.
//

#ifndef WORKERMANAGER3_WORKERMANAGER_H
#define WORKERMANAGER3_WORKERMANAGER_H

#include "worker.h"

class WorkerManager {
public:
    // ��Ա����
    int m_empNum;
    bool isEmptyFile;
    Worker **m_Worker;
    // ����
    void showInterface(); // ������
    void exitSystem(); // ����0���˳�
    void showEmp(); // ����1����ʾ
    int findEmp(); // ����2������
    void addEmp(); // ����3�����
    void modify(); // ����4���޸�
    void deleteEmp(); // ����5��ɾ��
    void sortEmp(); // ����6������
    void emptyEmp(); // ����7�����

    int idExist(int id);
    void initEmpArray();
    int getEmpFileNum();
    void showSpecific(int pos);
    void save(); // ���浽�ļ�
    // ��ʼ��
    WorkerManager();
};

#endif //WORKERMANAGER3_WORKERMANAGER_H
