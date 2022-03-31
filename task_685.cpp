#include <iostream>
#include <fstream>
#include <ctime>

void write() {
    srand(time(NULL));
    std::ofstream RandomValue("input.txt");
    for (int i = 0; i < 6; ++i) {
        RandomValue << rand() % 100 << " ";
    }
    RandomValue.close();
}

void sort(int arr[]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    write();

    int sum = 0;
    int const SIZE = 3;
    int price[SIZE]{};
    int capacities[SIZE]{};

    std::ifstream Value("input.txt");
    for (int i = 0; i < 3; ++i) {
        Value >> price[i];
    }
    for (int i = 0; i < 3; ++i) {
        Value >> capacities[i];
    }
    Value.close();

    sort(price);
    sort(capacities);
    for (int i = 0; i < 3;++i) {
        if (price[i] >= capacities[i]) {
            sum += capacities[i];
        }
        else {
            sum += price[i];
        }
    }
    std::ofstream result("output.txt");
    result << sum;
    result.close();
}
