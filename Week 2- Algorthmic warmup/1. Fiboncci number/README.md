## Naive Algorithm

The naive algorithm used to calculate Fibonacci is a recurssive function that recalls itself to calculate each Fibonacci number up to the
number required to be calculated. In which, if we want to calculate F5; the algorithm calculates F3 which is equal to F2+F1, then it
calculates F4=F3+F2+F1 and it recalualtes F3 again F2+F1 and so on; which is very a time consuming algorithm.

## Fast Algorithm

The faster algorithm is to calculate all the Fibonacci numbers up to the Fibonacci number required and save them in an array. Which instead of recalculating each number, it just fetches the corresponding Fibonacci number from the array.
