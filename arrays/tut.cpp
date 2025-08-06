#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    // Add elements
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.emplace_back(30); // faster version of push_back

    // Access elements
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    // Output: 10 20 30

    return 0;
}
