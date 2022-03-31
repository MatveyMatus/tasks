#include <iostream>
#include <fstream>

void write() {
    srand(time(NULL));
    std::ofstream RandomValue("input.txt");
    RandomValue << rand() % 101;
    RandomValue.close();
}

int main()
{
    write();

    int num;
    std::ifstream month("input.txt");
    month >> num;
    month.close();

    std::ofstream result("output.txt");
    if (num > 12 || num == 0) {
        result << "ERROR";
    }
    else {
        if (num == 1 || num == 2 || num == 12) {
            result << "Winter";
        }
        if (num == 3 || num == 4 || num == 5) {
            result << "Spring";
        }
        if (num == 6 || num == 7 || num == 8) {
            result << "Summer";
        }
        if (num == 9 || num == 10 || num == 11) {
            result << "Autumn";
        }
    }
    result.close();
}

