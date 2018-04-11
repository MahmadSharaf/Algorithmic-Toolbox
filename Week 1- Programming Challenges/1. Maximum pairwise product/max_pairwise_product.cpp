#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::cin;
using std::cout;

double MaxPairwiseProductNaive(const vector<int>& numbers) {
  double result = 0;
  int n = numbers.size();
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (numbers[i] * numbers[j] > result) {
        result = numbers[i] * numbers[j];
      }
    }
  }
  return result;
}

long long MaxPairwiseProductFast(const vector<int>& numbers){
  int a=0,b=0,j=0;
  int n = numbers.size();
  for (int i = 0; i<n; ++i){
    if(numbers[i]>=a){
      a=numbers[i];
      j=i;
    }
    }
    for (int i = 0; i<n; ++i){
      if(numbers[i]>=b and i!=j){
        b=numbers[i];
  }
}
  // cout<< a << " " << b << "\n";
  return ((long long) a)*b;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    /// Test case 1:
    // vector<int> testnumbers(200000);
    // for(int i = 0;i<200000;++i){
    //   testnumbers[i]=i+1;
    // }

    /// Teset case 2:
    // while (true) {
    //   int n = rand() % 1000 + 2;
    //   cout << n << "\n";
    //   vector<int> a;
    //   for (int i = 0; i < n; ++i) {
    //     a.push_back(rand() % 100000);
    //   }
    //   for (int i = 0; i < n; ++i) {
    //     cout << a[i] << ' ';
    //   }
    //   cout << "\n";
    //   long long res1 = MaxPairwiseProductNaive(a);
    //   long long res2 = MaxPairwiseProductFast(a);
    //   if (res1 != res2) {
    //     cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
    //     break;
    //   }
    //   else {
    //     cout << "OK\n";
    //   }
    // }


    long long result=MaxPairwiseProductFast(numbers);
    cout << result << "\n";
    return 0;
}
