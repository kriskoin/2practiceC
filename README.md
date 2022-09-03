# 2practiceC
## split array algorithms
Given an integer array , divide the array into 2 subsets A and B while respecting the folloing conditions:

Intersection of A and B is null/
The union A and B is equal to the original array
The sum oF A's elements is greater than the sum of B's elements

returns the subset A in increasing orde where the sum of A's elements is greater than the sum odf B's elements.
If more than one subsets exits, returnn the one with the minimal sum

Example

n = 5

arr = [3, 7, 5, 6, 2]

The 2 subsets in arr that satisfy the conditions for A are [5, 7] and [6, 7]:

A is minimal (size 2)
Sum(A) = (5 + 7) = 12 > Sum(B) = (2 + 3 + 6) = 11
Sum(A) = (6 + 7) = 13 > Sum(B) = (2 + 3 + 5) = 10
The intersection of A and B is null and their union is equal to arr.
The subset A where the sum of its elements is maximal is [6, 7].
Function Description

Complete the subsetA function in the editor below.

subsetA has the following parameter(s):

int arr[]: an integer array Returns:
int[] : an integer array with the values of subset A.
Constraints

1 ≤ n ≤ 105
1 ≤ arr[i] ≤ 105 (where 0 ≤ i < n)
Input Format For Custom Testing

The first line contains an integer, n, denoting the number of elements in the array. Each line i of the n subsequent lines contains an integer, which is an element of arr.

Sample Case 0

### How to build
cd build
cmake ..
make
### How to test
ctest

Happy coding !!!