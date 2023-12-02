#include <iostream>
#include <vector>

int main() {
    int t; // Number of test cases
    std::cin >> t;

    while (t--) {
        int n; // Number of responses in each test case
        std::cin >> n;

        std::vector<int> words(n), quality(n);

        // Input responses and qualities
        for (int i = 0; i < n; ++i) {
            std::cin >> words[i] >> quality[i];
        }

        int winnerIndex = -1;
        int maxQuality = -1;

        for (int i = 0; i < n; ++i) {
            if (words[i] <= 10 && quality[i] > maxQuality) {
                maxQuality = quality[i];
                winnerIndex = i;
            }
        }

        std::cout << winnerIndex + 1 << std::endl;
    }

    return 0;
}
