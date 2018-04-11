#include <iostream>
#include <vector>
using std::vector;

// long long get_fibonacci_partial_sum_naive(long long from, long long to) {
//     long long sum = 0;
//
//     long long current = 0;
//     long long next  = 1;
//
//     for (long long i = 0; i <= to; ++i) {
//         if (i >= from) {
//             sum += current;
//         }
//
//         long long new_current = next;
//         next = next + current;
//         current = new_current;
//     }
//
//     return sum % 10;
// }

int get_fibonacci_partial_sum_fast(long long m, long long n){

/// This Function calculates modulas m of Fibonacci number n ///

// Initializations:
  int current=0;
  int previous=0;
  int tmp=0;
  int sum=0;
/* loop that calculates the Pisano sequence by summing the previous 2
  numbers with the breaking conditions which is another occurance of a zero
  followed by a one    */
  m=m%60;
  n=n%60;
  if (n < m) n += 60;
  // std::cout<< "from:" << m << " To:" << n << '\n';
    for (int i=0; i <= n ; ++i){
      tmp=current+previous;
      previous=current;
      if (i == 1) tmp=1;
      current=tmp%10;
      // std::cout << "prev=" << previous << "  curr=" << current << ',';
      if (i>=m)
      sum+=current;
      // std::cout << current << '\n';

    }
    return sum%10;


}

int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
}
