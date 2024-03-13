#include <iostream>

double computeSeriesSum(int n) {
    double sum = 0.0;
    int sign = 1;
    
    for (int i = 1; i <= n; ++i) {
        sum += sign * (1.0 / i) * (1.0 / i);
        sign *= -1; // alternate the sign
    }
    
    return sum;
}

int main(int argc, char *argv[]) {
    int n;

    if (argc > 1) {
        n = std::stoi(argv[1]);
    } else {
        std::cout << "Enter the value of n: ";
        std::cin >> n;
    }

    if (n <= 0) {
        std::cerr << "Error: Invalid value of n. Please enter a positive integer.\n";
        return 1;
    }

    double sum = computeSeriesSum(n);
    std::cout << "Sum of the first " << n << " terms of the series: " << sum << std::endl;

    return 0;
}
