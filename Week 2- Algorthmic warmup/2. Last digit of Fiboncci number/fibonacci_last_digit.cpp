#include <iostream>
// #include <chrono>  // for high_resolution_clock
// #include <ctime>

// int get_fibonacci_last_digit_naive(int n) {
//     if (n <= 1)
//         return n;
//
//     int previous = 0;
//     int current  = 1;
//
//     for (int i = 0; i < n - 1; ++i) {
//         int tmp_previous = previous;
//         previous = current;
//         current = tmp_previous + current;
//     }
//
//     return current % 10;
// }

int get_fibonacci_last_digit_fast(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
    }

    return current;
}

int main() {
    // using namespace std::chrono ;

    double n;
    std::cin >> n;

    // Record start time
    // const auto startp = std::clock() ;
    // const auto startw = steady_clock::now() ;
    // const auto starts = std::chrono::steady_clock::now() ;

    int c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';

    }
