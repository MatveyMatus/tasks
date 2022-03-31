#include <iostream>
#include <fstream>
#include <ctime>

void write() {
    srand(time(NULL));
    std::ofstream RandomValue("input.txt");
    int temp = rand() % 5+3;
    RandomValue << temp << std::endl;
    for (int i = 0; i < temp; ++i) {
        RandomValue << rand() % 10 << " ";
    }
    RandomValue.close();
}


int main()
{
    write();

    std::ifstream Value("input.txt");

    int temp1,
        temp2;
    Value >> temp1;
    int SIZE = temp1;
    std::cout << temp1 << std::endl;
    int* ArrayNums = new int[SIZE]{};
    for (int q = 0; q < SIZE; ++q) {
        Value >> ArrayNums[q];
    }
    Value.close();

    std::ofstream out("output.txt");
    for (int i = SIZE-1; i >= 0; --i) {
        out << ArrayNums[i] << " ";
    }

    out.close();
    delete[]ArrayNums;
}