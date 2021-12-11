#include <iostream>

int main() {
    std::cout << "I'am Bread" << std::endl;
    char* bread = (char*) malloc(sizeof(char) * 15);

    bread[0] = 73;  bread[1] = 39;
    bread[2] = 97;  bread[3] = 109;
    bread[4] = 32;  bread[5] = 98;
    bread[6] = 114; bread[7] = 101;
    bread[8] = 97;  bread[9] = 100;
    bread[10] = 0;

    std::cout << (const char*)bread << std::endl;

    return 0;
}
