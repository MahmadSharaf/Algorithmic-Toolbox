#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  int new_n=n;
  for (int i=1; i<=n; ++i)
  {
    if ((i+1) > new_n-i)
    {
      summands.push_back(new_n);
      break;
    }
    else
    {
      summands.push_back(i);
      new_n-=i;
    }
  }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
