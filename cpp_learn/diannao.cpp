/**
 * Created by lpzju on 2023/3/19 15:46
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

using namespace std;

// 电脑部件：CPU、显卡、内存条
// 将零件封装出抽象基类，提供不同的厂商生产不同的零件，intel和amd
// 创建电脑类让电脑工作的函数，调用每个零件工作的接口
// 测试组装不同电脑工作
class CpuAbstract {
public:
    virtual void calculate() = 0;
};

class GpuAbstract {
public:
    virtual void show() = 0;
};

class MemoryAbstract {
public:
    virtual void store() = 0;
};

class IntelCpuAbstract : public CpuAbstract {
public:
    void calculate() override {
        cout << "Intel Cpu" << endl;
    };
};

class IntelGpuAbstract : public GpuAbstract {
public:
    void show() override {
        cout << "Intel GPU" << endl;
    };
};

class IntelMemoryAbstract : public MemoryAbstract {
public:
    void store() override {
        cout << "Intel Memory" << endl;
    };
};

class Computer {
public:
    Computer(CpuAbstract *cpu, GpuAbstract *gpu, MemoryAbstract *mem) {
        m_cpu = cpu;
        m_gpu = gpu;
        m_mem = mem;
    }

    void doWork() {
        m_cpu->calculate();
        m_gpu->show();
        m_mem->store();
    }

    ~Computer() {
        if (m_cpu != nullptr) {
            delete m_cpu;
            m_cpu = nullptr;
        }
        if (m_gpu != nullptr) {
            delete m_gpu;
            m_gpu = nullptr;
        }
        if (m_mem != nullptr) {
            delete m_mem;
            m_mem = nullptr;
        }
    }

private:
    CpuAbstract *m_cpu;
    GpuAbstract *m_gpu;
    MemoryAbstract *m_mem;
};

void test() {
    CpuAbstract *cpuAbstract = new IntelCpuAbstract;
    GpuAbstract *gpuAbstract = new IntelGpuAbstract;
    MemoryAbstract *memoryAbstract = new IntelMemoryAbstract;
//    Computer computer(cpuAbstract,gpuAbstract,memoryAbstract);
    Computer *computer1 = new Computer(cpuAbstract, gpuAbstract, memoryAbstract);
    computer1->doWork();
    delete computer1;
}

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    test();
    return 0;
}