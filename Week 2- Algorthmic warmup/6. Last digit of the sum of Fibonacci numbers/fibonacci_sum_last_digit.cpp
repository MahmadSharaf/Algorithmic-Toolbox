#include <iostream>

// int fibonacci_sum_naive(long long n) {
//     if (n <= 1)
//         return n;
//
//     long long previous = 0;
//     long long current  = 1;
//     long long sum      = 1;
//
//     for (long long i = 0; i < n - 1; ++i) {
//         long long tmp_previous = previous;
//         previous = current;
//         current = tmp_previous + current;
//         sum += current;
//     }
//
//     return sum % 10;
// }

int fibonacci_sum_fast(long long n){

/// This Function calculates modulas m of Fibonacci number n ///

// Initializations:
  int current=0;
  int previous=0;
  int tmp=0;
  int normalize=n%60; // Normalizing the fibonacci with respect to the Pisano period length
  int sum=1;
/* loop that calculates the Pisano sequence by summing the previous 2
  numbers with the breaking conditions which is another occurance of a zero
  followed by a one    */

  if (normalize==0) return 0;
  else if (normalize==1) return 1;

  else {
    current=1;
    previous=0;
    for (int i=2; i <= (normalize) ; ++i){
      tmp=current+previous;
      previous=current;
      current=tmp%10;
      sum+=current;
    }
    return sum%10;
  }

}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_fast(n);
}
