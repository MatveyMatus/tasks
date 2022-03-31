#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>

void write() {
    srand(time(NULL));
    std::ofstream RandomValue("Value.txt");
    for (int q = 0; q < 3; ++q) {
        RandomValue << rand() % 100000 - 50000 << " ";
    }
    RandomValue.close();

}

int main()
{
    write();
    
    int num;
    const int SIZE = 3;
    int Nums[SIZE];


    std::ifstream Value("Value.txt");

    for (int i = 0; i < 3; ++i) {
        Value >> num;
        Nums[i] = num;
    }
    Value.close();

    std::ofstream result("OutValue.txt");
    if (Nums[0] + Nums[1] == Nums[2] || Nums[2] + Nums[1] == Nums[0] || Nums[2] + Nums[0] == Nums[1]) {
        result << "YES";
    }
    else {
        result << "NO";
    }
    result.close();
    std::cout << "\twell";
}
