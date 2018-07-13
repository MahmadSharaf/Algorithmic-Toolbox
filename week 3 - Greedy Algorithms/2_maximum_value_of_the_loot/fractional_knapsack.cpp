#include <iostream>
#include <vector>       // std::vector
#include <algorithm>    // std::sort
#include <iomanip>      // std::setprecision

using std::vector;

// Structure to collect related items
struct items{
  float value;
  float weight;
  float normalized;   // It is the value per unit
};

// Sort items by value per unit descendingly
bool sortByNormalized(const items &lhs, const items &rhs) { return lhs.normalized > rhs.normalized; }

// Function which fills the knapsack with items that has the hightest value
double get_optimal_value(vector<items> item,int n,int capacity) {
  /* Inputs: vector of structs , n:number of items, capacity of knapsack
   Output: The total value of the items in knapsack */

  double value = 0.0;

  // Sorting the vector of struct using sort function
  // to increase the running time of the algorithm
  std::sort(item.begin(), item.end(), sortByNormalized);

  // adding items into knapsack according to its value per unit
  for (int i=0; i < n ; ++i)
  {
    if ((capacity-item[i].weight) > 0)  // checks if there is a space available
    {value += item[i].normalized * item[i].weight;  // calculates its total value
    capacity-=item[i].weight;}   // calculates the remaining space in the knapsack
    else      // if the remaining space available is less than that of the item
    {value += capacity * item[i].normalized; // add the value of the items that can be taken
    break;} // exit the loop
  }
  return value; // return total value
}

int main() {

  // Initializations
  int n;
  int capacity;
  vector<items> item;

  // user inserts the number of items and knapsack capacity
  std::cin >> n >> capacity;

  // scan for the value and the weight of each item
  for (int i = 0; i < n; i++) {
    item.push_back(items());  //increase one space in the vector
    std::cin >> item[i].value >> item[i].weight;
    item[i].normalized=item[i].value/item[i].weight;  // calculates the normalized value
  }

  double optimal_value = get_optimal_value(item,n,capacity);

  std::cout.precision(9);
  std::cout  << optimal_value << std::endl;

  return 0;
}
