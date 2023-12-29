#include <iostream>
#include <vector>
#include <cmath>

bool canBuildSquare(std::vector<int>& buckets) {
    long long totalSquares = 0;

    // Calculate the total count of squares
    for (int squares : buckets) {
        totalSquares += squares;
    }

    // Check if the total count of squares is a perfect square
    long long sideLength = sqrt(totalSquares);
    if (sideLength * sideLength == totalSquares) {
        return true;
    }

    return false;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> buckets(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> buckets[i];
        }

        if (canBuildSquare(buckets)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
