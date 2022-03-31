#include <iostream>
#include <fstream>
#include <cmath>

void write() {
    srand(time(NULL));
    std::ofstream RandomValue("input.txt");
    for (int i = 0; i < 3; ++i) {
        RandomValue << rand() % 20 + 10 << " ";
    }
    RandomValue.close();
}


int main()
{
    write();
    int R1,R2,R3;

    std::ifstream Value("input.txt");
    Value >> R1 >> R2 >> R3;
    Value.close();

    int R1square = 3.14 * pow((R1 * 1.0) / (2 * 1.0), 2);
    int R2square = 3.14 * pow((R2 * 1.0) / (2 * 1.0), 2);
    int R3square = 3.14 * pow((R3 * 1.0) / (2 * 1.0), 2);

    std::ofstream result("output.txt");

    if (R2square + R3square <= (R1square / 2)) {
        result << "YES";
    }
    else {
        result << "NO";
    }
}
