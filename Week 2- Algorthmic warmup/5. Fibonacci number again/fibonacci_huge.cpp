#include <iostream>
#include <vector>

// long long get_fibonacci_huge_naive(long long n, long long m) {
//     if (n <= 1)
//         return n;
//
//     long long previous = 0;
//     long long current  = 1;
//
//     for (long long i = 0; i < n - 1; ++i) {
//         long long tmp_previous = previous;
//         previous = current;
//         current = tmp_previous + current;
//     }
//
//     return current % m;
// }


long long get_fibonacci_huge_fast(long long n, long long m){

/// This Function calculates modulas m of Fibonacci number n ///


// Initializations:
  int period=0;
  int current=0;
  int previous=0;
  int tmp=0;
  int * Pisano = new int[6*m];
/* loop that calculates the Pisano sequence by summing the previous 2
  numbers with the breaking conditions which is another occurance of a zero
  followed by a one    */
  while(true){
    Pisano[period]=current;
    if (n==period)      // no need to calculate the whole sequence if
    {                   // the fibonacci number 'n' is less than the length of
      return current;   // the Pisano sequence
    }
    if (period!=0) {      // After the first step of Initialization
    tmp=current+previous; // This block calculates the period of
    previous=current;     // Pisano sequence, but does not save the elements
    current=tmp%m;
    }
    else current=1;       // Initalize the first step of the sequence
    if (previous==0 && current==1 && period>1) break;
    period++;
  }
  return Pisano[n%period];
  // // if the fibonacci larger than the period length
  // normalize=n%period; // Normalizing the fibonacci with respect to the Pisano period length
  // if (normalize==0) return 0;
  // else if (normalize==1) return 1;
  //
  // else {
  //   current=1;
  //   previous=0;
  //   for (int i=2; i <= (normalize) ; ++i){
  //     tmp=current+previous;
  //     previous=current;
  //     current=tmp%m;
  //   }
  //   return current;
  // }
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast(n,m);
}
