#include <iostream>
// #include <chrono>
// #include <cstdlib>

// int gcd_naive(int a, int b) {
//   int current_gcd = 1;
//   for (int d = 2; d <= a && d <= b; d++) {
//     if (a % d == 0 && b % d == 0) {
//       if (d > current_gcd) {
//         current_gcd = d;
//       }
//     }
//   }
//   return current_gcd;
// }

int gcd_effiecent(long long a, long long b){
  long long num,den,mod;
  num=a;den=b;mod=num%den;
  for (long long i=0;i<=a+b;++i){
    if (mod==0){
      return den;
      break;
    }
    else{
      num=den;
      den=mod;
      mod=num%den;
    }
  }
}

int main() {
  long long a, b;
   std::cin >> a >> b;

  /// Stress Test
//   int ran_num1,ran_num2;
//   while(true)
//
// { ran_num1=rand() % 1000 + 2;
//   ran_num2=rand() % 1000 + 2;
//   int res1=gcd_naive(ran_num1,ran_num2);
//   int res2=gcd_effiecent(ran_num1,ran_num2);
//   if (res1!=res2){
//     std::cout<< "Wrong Answer"<<"\n" << "Result_Naive="<<res1<<"Result_Fast="<<res2;
//     break;
//   }
//   else std::cout<<"OK";}


  // Start Time
  // auto starts = std::chrono::steady_clock::now();

  // Code
    std::cout << gcd_effiecent(a, b);

  // End Time
  // auto ends = std::chrono::steady_clock::now() ;

  //output
  // std::cout << "elapsed processor time: " << double(std::chrono::duration_cast <std::chrono::nanoseconds> (ends-starts).count())<< " nsecs\n";
  return 0;
}
