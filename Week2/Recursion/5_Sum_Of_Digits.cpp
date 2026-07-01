/*
 * Problem: Sum of digits
 * Platform: GeeksForGeeks
 * Difficulty: Easy
 * Link: https://www.geeksforgeeks.org/problems/sum-of-digits1742/1
 *
 * Approach: Recursion — base case at n=0, recursive call does n%10 + sum(n/10)
 *
 * Time Complexity: O(log n)
 * Space Complexity: O(logn) — recursive call stack
 */

class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        if(n == 0)
            return 0;
        
        return ((n%10) + sumOfDigits(n/10));
    }
};