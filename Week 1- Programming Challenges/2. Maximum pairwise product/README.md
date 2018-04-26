# Maximum Pairwise Product Problem:
### Find the maximum product of two distinct numbers in a sequence of non-negative integers.
## Input: 
### A sequence of non-negativeintegers.
## Output: 
## The maximum value that can be obtained by multiplying two different elements from the sequence.

# Fast Algorithm:
### Since we need to find the largest and the second largest elements, we need only two scans of the sequence. During the first scan, we find the largest element. During the second scan, we find the largest element among the remaining ones by skipping the element found at the previous scan.
