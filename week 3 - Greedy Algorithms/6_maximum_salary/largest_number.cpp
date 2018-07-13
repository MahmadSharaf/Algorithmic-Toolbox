#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

char IsGreaterOrEqual(string a,string b)
{
  // std::cout << "a+b: "<<a+b<<" b+a: "<<b+a << ((a+b)>=(b+a)) << '\n';
  if ((a+b)>=(b+a))
    return true;
  else
    return false;
}


string largest_number(vector<string> a) {
  string ret;
  string maxdigit="0";
  int index=0;
  while (!a.empty())
  {
    maxdigit="0";
    for (int i = 0; i < a.size(); i++)
    {
      if (IsGreaterOrEqual(a[i],maxdigit))
      {
        maxdigit=a[i];
        index=i;
        // std::cout << "max digit: "<< maxdigit << '\n';
        // std::cout << "index: "<< index << '\n';
      }
      else continue;
    }
    a.erase(a.begin() + index);
    ret += maxdigit;
    // std::cout << "ret"<<ret <<'\n';
  }
     // string result;
     // ret >> result;
    // std::cout << "ret: " <<ret<< '\n';
    return ret;

}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
