#include <iostream>

// long long lcm_naive(int a, int b) {
//   for (long l = 1; l <= (long long) a * b; ++l)
//     if (l % a == 0 && l % b == 0)
//       return l;
//
//   return (long long) a * b;
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

long long lcm_fast(long long a, long long b){
  return a/gcd_effiecent(a,b)*b;
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
