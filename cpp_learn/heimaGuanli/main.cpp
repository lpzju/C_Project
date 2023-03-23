#include <iostream>
#include "workerManager.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    WorkerManager wm;
    while (true) {
        wm.showMenu();
        int ch;
        std::cin >> ch;
        switch (ch) {
            case 0:
                std::cout << "tuichu" << std::endl;
                exit(EXIT_SUCCESS);
                break;
            case 1:
                std::cout << "tuichu" << std::endl;
                break;
            case 2:
                std::cout << "tuichu" << std::endl;
                break;
            case 3:
                std::cout << "tuichu" << std::endl;
                break;
            case 4:
                std::cout << "tuichu" << std::endl;
                break;
            case 5:
                std::cout << "tuichu" << std::endl;
                break;
            case 6:
                std::cout << "tuichu" << std::endl;
                break;
            case 7:
                std::cout << "tuichu" << std::endl;
                break;
            default:
                std::cout << "youwenti" << std::endl;
                system("cls");
                break;
        }
    }
    return 0;
}
